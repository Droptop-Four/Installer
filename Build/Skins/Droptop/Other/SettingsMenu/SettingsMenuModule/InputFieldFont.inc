[Rainmeter]
OnCloseAction=[!EnableMouseAction * "MouseOverAction|MouseLeaveAction" "Droptop\Other\SettingsMenu\SettingsMenu1"][!EnableMouseAction * "MouseOverAction|MouseLeaveAction" "Droptop\Other\SettingsMenu\SettingsMenu2"][!EnableMouseAction * "MouseOverAction|MouseLeaveAction" "Droptop\Other\SettingsMenu\SettingsMenu3"][!EnableMouseAction * "MouseOverAction|MouseLeaveAction" "Droptop\Other\SettingsMenu\SettingsMenu4"][!EnableMouseAction * "MouseOverAction|MouseLeaveAction" "Droptop\DropdownBar\Other\ContextBox"][!UpdateGroup SettingsMenu]
MouseOverAction=[!EnableMeasureGroup XY]
Update=100

[Variables]
DropdownItemPadding1=#DropdownNoIconPadding#

UserInput=None

FullFilePath=

;---------------------------

[MeasureMouseX]
Measure=Plugin
Plugin=MouseXY
Dimension=X
IfAboveValue=(#CURRENTCONFIGX#+#CURRENTCONFIGWIDTH#)
IfAboveAction=["#@#Scripts\DroptopAHK.#AHKType#" "EscapeKey"]
IfBelowValue=(#CURRENTCONFIGX#)
IfBelowAction=["#@#Scripts\DroptopAHK.#AHKType#" "EscapeKey"]
DynamicVariables=1
Disabled=1
Group=XY

[MeasureMouseY]
Measure=Plugin
Plugin=MouseXY
Dimension=Y
IfAboveValue=(#CURRENTCONFIGY#+#CURRENTCONFIGHEIGHT#)
IfAboveAction=["#@#Scripts\DroptopAHK.#AHKType#" "EscapeKey"]
IfBelowValue=(#CURRENTCONFIGY#)
IfBelowAction=["#@#Scripts\DroptopAHK.#AHKType#" "EscapeKey"]
DynamicVariables=1
Disabled=1
Group=XY

;---------------------------

[MeasureFilePath]
Measure=String
String=[#FullFilePath]
RegExpSubstitute=1
Substitute="(^.*\\)(.*)":"\1",'"':""
Group=FullFilePath
DynamicVariables=1
UpdateDivider=-1

[MeasureFileName]
Measure=String
String=[#FullFilePath]
RegExpSubstitute=1
; Substitute="^.*\\":"","\..*":"",'"':""
Group=FullFilePath
DynamicVariables=1
UpdateDivider=-1

[MeasureExtension]
Measure=String
String=[#FullFilePath]
RegExpSubstitute=1
Substitute="^.*\\":"",".*\.":".",'"':""
Group=FullFilePath
DynamicVariables=1
UpdateDivider=-1
OnChangeAction=[!WriteKeyValue Variables TestPath "[&MeasureFilePath]" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables TestName "[&MeasureFileName]" "#@#GlobalVar\Control.inc"][!WriteKeyValue Variables TestExtension "[&MeasureExtension]" "#@#GlobalVar\Control.inc"][!UpdateMeasure Powershell.GetFontName][!CommandMeasure Powershell.GetFontName "Run"]

[Powershell.GetFontName]
Measure=Plugin
Plugin=RunCommand
Program=PowerShell
Parameter=cd '#@#Scripts\Powershell'; .\GetFontName.ps1 '[&MeasureFilePath]' '[&MeasureFileName]' '[&MeasureExtension]' '#SKINSPATH#']
State=Hide
OutputType=ANSI
OutputFile=
DynamicVariables=1
FinishAction=

[MeasureRegistry]
Measure=Registry
RegHKey=HKEY_CURRENT_USER
RegKey=Control Panel\Desktop\WindowMetrics
RegValue=AppliedDPI
UpdateDivider=-1

[InputTextFontSize]
Measure=Calc
Formula=(((11*#DroptopSize#)-((((11*#DroptopSize#)*(((ROUND(([MeasureRegistry]/100)/0.25)))*0.25))-(11*#DroptopSize#))/2))-(((11*#DroptopSize#)-((((11*#DroptopSize#)*(((ROUND(([MeasureRegistry]/100)/0.25)))*0.25))-(11*#DroptopSize#))/2))%1))
DynamicVariables=1

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*1+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DividerHeight#*#NumberOfDividers#)-(#DropdownMenuCutout#*2)+((26*#DroptopSize#)*1)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
DynamicVariables=1

;---------------------------

[1]
AntiAlias=1
InlineSetting2=
StringAlign=Left
FontSize=(11*#DroptopSize#)
FontFace=#UniversalFont#
FontWeight=
SolidColor=255,255,255
FontColor=0,0,0,185
MouseOverAction=[!SetOption #CURRENTSECTION# FontColor "0,0,0,255"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FontColor "0,0,0,185"][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseUpAction=[!EnableMeasureGroup XY][!UpdateMeasureGroup XY][!UpdateGroup SettingsMenu][!CommandMeasure #CURRENTSECTION#InputField "ExecuteBatch 1"]
X=(1+#DropdownStrokeWidth#)
Y=(#DropdownIconYoffset#-(#DropdownIconYoffset#%1)+#DropdownItemYOffset#)
W=(#DropdownMenuWidth#-(#DropdownStrokeWidth#*2)-#DropdownNoIconPadding#+1-#DropdownNoIconPadding#)
H=
Postfix=" ..."
Padding=#DropdownNoIconPadding#,0,#DropdownNoIconPadding#,0

[2]
Text=""
MouseOverAction=[]
MouseLeaveAction=[]

[3]
FontColor=#DropdownFontColor1#,128
MouseOverAction=[]
MouseLeaveAction=[]
Y=(-15*#DroptopSize#)R
Hidden=0

[4]
Hidden=1

[1InputField]
Measure=Plugin
Plugin=InputText.dll
FontFace=#UniversalFont#
StringAlign=Left
FontSize=[InputTextFontSize]
SolidColor=255,255,255
AntiAlias=1
W=([1:W]-(#DropdownNoIconPadding#+(2*#DroptopSize#)))
H=[1:H]
X=([1:X]+#DropdownNoIconPadding#)
Y=[1:Y]
FocusDismiss=0
Command1=#OptionChanged.Suite#[!SetVariable FullFilePath """$UserInput$"""][!Update][!EnableMeasureGroup FullFilePath][!UpdateMeasureGroup FullFilePath]
DefaultValue="#SettingsAddFont#"
DynamicVariables=1