[Rainmeter]
OnFocusAction=#HideAll#[!Zpos 0]
OnRefreshAction=[!Zpos 1][!SetWindowPosition 50% 50% "50%" "50%"][!ShowFade]
OnCloseAction=[!WriteKeyValue Variables OpenStartup 0][!WriteKeyValue Variables CustomApp[#[&MeasureAppID]]UpdateAvailable 0 "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!SetVariable CustomApp[#[&MeasureAppID]]UpdateAvailable 0 "Droptop\DropdownBar"][!WriteKeyValue Variables CustomAppInstallDate[#[&MeasureAppID]] "[&MeasureVersionTime]" "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!UpdateMeter * "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

[Variables]
@IncludeControl=#SKINSPATH#Droptop\@Resources\GlobalVar\Control.inc
@IncludeUserSettings=#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc
@IncludeLanguage=#SKINSPATH#Droptop\@Resources\GlobalVar\Languages\[#Language[#LanguageNum]].inc
@IncludeWindowMeters=#SKINSPATH#Droptop\@Resources\Meters\WindowMeters.inc

DroptopSize=(#SCREENAREAHEIGHT#/720)

SlotWidth=50

WindowWidth=(600*#DroptopSize#)
WindowHeight=(280*#DroptopSize#)

DeactivateAction0=[!ActivateConfig "Droptop Community Apps\Apps\[&MeasureAppID]\Startup" "MyStartup.ini"][!DeactivateConfigGroup WebView][!RefreshGroup DroptopSuite]
DeactivateAction1=[!DeactivateConfig][!DeactivateConfigGroup WebView][!RefreshGroup DroptopSuite]

OpenAction0=[!HideFade]
OpenAction1=

AppSlot1=1
AppSlot2=2
AppSlot3=3
AppSlot4=4
AppSlot5=5

AppSlot1Icon=1
AppSlot2Icon=2
AppSlot3Icon=3
AppSlot4Icon=4
AppSlot5Icon=5

MeasureAppName1=1
MeasureAppName2=2
MeasureAppName3=3
MeasureAppName4=4
MeasureAppName5=5

SelectedAppName=
SlotSelectedIndex=
SlotSelected=0

SelectedAppText0=Select a slot for [MeasureAppName0]
SelectedAppText1=""
CustomAppPosition=1

[MeasureVersionTime]
Measure=Time
Format=%y.%m%d
DynamicVariables=1

[Powershell.Startup]
Measure=Plugin
Plugin=RunCommand
Program=PowerShell
Parameter=cd '#SKINSPATH#Droptop Community Apps\Apps\[MeasureAppID]\Variables'; Remove-Item -Path ".\Variables.inc" -Recurse; Copy-Item -Path ".\VariablesDefault.inc" -Destination ".\Variables.inc" -Recurse
State=Hide
OutputType=ANSI
OutputFile=
DynamicVariables=1
FinishAction=[!Delay 1000][!CommandMeasure RunCommand.CustomAction "Run"]

[RunCommand.CustomAction]
Measure=Plugin
Plugin=RunCommand
Parameter=#RunCommand.CustomAction#
State=Hide
OutputType=ANSI
OutputFile=
FinishAction=[#DeactivateAction[#DeactivateImmediately]]

[OnLoadAction]
Measure=Calc
IfCondition=1=1
IfTrueAction=[!ShowFade]
UpdateDivider=-1

; ----------------------------------

[MeasureAppID]
Measure=String
String=#CURRENTPATH#
Substitute="#SKINSPATH#Droptop Community Apps\Apps\":"","\\.*$":""
RegExpSubstitute=1

[MeasureAppName0]
Measure=String
String=#CURRENTPATH#
Substitute="#SKINSPATH#Droptop Community Apps\Apps\":"","\Startup":"","\":"","_":" ","-":" - "," - .*$":""
RegExpSubstitute=1

[MeasureAuthor0]
Measure=String
String=#CURRENTPATH#
Substitute="#SKINSPATH#Droptop Community Apps\Apps\":"","\Startup":"","\":"","_":" ","-":" - ","^.* - ":""
RegExpSubstitute=1

[MeasurePreexisting]
Measure=String
String=[&MeasureAppID]
IfMatch=[#CustomAppID1]|[#CustomAppID2]|[#CustomAppID3]|[#CustomAppID4]|[#CustomAppID5]
IfMatchAction=[!HideMeterGroup Page1][!ShowMeterGroup Page2][!UpdateMeter *][!Redraw]

; -----

[MeasureAppName1]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "," - .*$":""
RegExpSubstitute=1
DynamicVariables=1

[MeasureAppName2]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "," - .*$":""
RegExpSubstitute=1
DynamicVariables=1

[MeasureAppName3]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "," - .*$":""
RegExpSubstitute=1
DynamicVariables=1

[MeasureAppName4]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "," - .*$":""
RegExpSubstitute=1
DynamicVariables=1

[MeasureAppName5]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "," - .*$":""
RegExpSubstitute=1
DynamicVariables=1

; ----------------------------------

[TitleText1]
Text="[MeasureAppName0]"

[TitleText2]
Text="by [MeasureAuthor0]"

[TitleText3]
Text="Select a slot for [MeasureAppName0]"
Y=(145*#DroptopSize#)
Hidden=0
Group=Page1

; ----------------------------------

[CustomAppSlotStyle]
Shape=Rectangle (10*#DroptopSize#),0,(#SlotWidth#*#DroptopSize#),(#SlotWidth#*#DroptopSize#),10 | Extend StrokeColor
StrokeColor=Fill Color 255,255,255,25 | Stroke Color 255,255,255,155 | StrokeWidth (2*#DroptopSize#)
Shape2=Rectangle 0,0,((#SlotWidth#+20)*#DroptopSize#),(#SlotWidth#*#DroptopSize#),0 | Fill Color 0,0,0,0 | StrokeWidth 0
LeftMouseDownAction=[!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" "Slots"][!DisableMouseAction #CURRENTSECTION# "MouseOverAction|MouseLeaveAction"][!SetVariable SelectedAppName "[&MeasureAppName[##CURRENTSECTION#]]"][!SetVariable SlotSelected 1][!SetVariable SlotSelectedIndex [##CURRENTSECTION#]][!SetOption TitleText3 Text ""][!SetOptionGroup Slots StrokeColor ""][!SetOptionGroup Slots ImageTint ""][!SetOption AppSlot[##CURRENTSECTION#]Icon ImageTint "#Lime#"][!SetOption #CURRENTSECTION# StrokeColor "Fill Color #Lime#,25 | Stroke Color #Lime# | StrokeWidth (3*#DroptopSize#)"][!SetOptionGroup Slots ImageName "[#CustomAppLocation[##*CURRENTSECTION*#]]Button\Medium\ButtonS.png"][!SetOption AppSlot[##CURRENTSECTION#]Icon ImageName "#ROOTCONFIGPATH#Apps\[&MeasureAppID]\Button\Medium\ButtonS.png"][!ShowMeterGroup Button1][!UpdateMeter *][!UpdateMeter Button1][!Redraw]
MouseOverAction=[!SetOption TitleText3 Text "[&MeasureAppName[##CURRENTSECTION#]]"][!SetOption #CURRENTSECTION# StrokeColor "Fill Color 255,255,255,25 | Stroke Color #Lime# | StrokeWidth (2*#DroptopSize#)"][!SetOption AppSlot[##CURRENTSECTION#]Icon ImageTint "#Lime#"][!UpdateMeterGroup Slot[##CURRENTSECTION#]][!UpdateMeter TitleText3][!Redraw]
MouseLeaveAction=[!SetOption TitleText3 Text "[#SelectedAppText[#SlotSelected]]"][!SetOption #CURRENTSECTION# StrokeColor ""][!SetOption AppSlot[##CURRENTSECTION#]Icon ImageTint ""][!UpdateMeterGroup Slot[##CURRENTSECTION#]][!Redraw][!Delay 10][!UpdateMeter TitleText3][!Redraw]
; X=(#SlotSpacing#*#DroptopSize#)R
X=1R
Y=r
W=((#SlotWidth#+20)*#DroptopSize#)
H=(#SlotWidth#*#DroptopSize#)
Group=Slot[##CURRENTSECTION#] | Slots | Page1
DynamicVariables=1

[AppSlot1]
Meter=Shape
MeterStyle=CustomAppSlotStyle
X=((#WindowWidth#-([#CURRENTSECTION#:W]*5))-((#WindowWidth#-([#CURRENTSECTION#:W]*5))/2))
Y=(160*#DroptopSize#)

[AppSlot2]
Meter=Shape
MeterStyle=CustomAppSlotStyle

[AppSlot3]
Meter=Shape
MeterStyle=CustomAppSlotStyle

[AppSlot4]
Meter=Shape
MeterStyle=CustomAppSlotStyle

[AppSlot5]
Meter=Shape
MeterStyle=CustomAppSlotStyle

; ------

[CustomAppSlotIconStyle]
ImageName=[#CustomAppLocation[##CURRENTSECTION#]]Button\Medium\ButtonS.png
X=([AppSlot[##CURRENTSECTION#]:X]+(8*#DroptopSize#))
Y=([AppSlot[##CURRENTSECTION#]:Y]+(8*#DroptopSize#))
W=((#SlotWidth#*#DroptopSize#)+(4*#DroptopSize#))
DynamicVariables=1
Group=Slot[##CURRENTSECTION#] | Slots | Page1

[AppSlot1Icon]
Meter=Image
MeterStyle=CustomAppSlotIconStyle

[AppSlot2Icon]
Meter=Image
MeterStyle=CustomAppSlotIconStyle

[AppSlot3Icon]
Meter=Image
MeterStyle=CustomAppSlotIconStyle

[AppSlot4Icon]
Meter=Image
MeterStyle=CustomAppSlotIconStyle

[AppSlot5Icon]
Meter=Image
MeterStyle=CustomAppSlotIconStyle

; ----------------------------------

[Button1MouseAction0]
MouseOverAction=[]
MouseLeaveAction=[]
LeftMouseDownAction=[]

[Button1MouseAction1]
LeftMouseDownAction=[!WriteKeyValue Variables CustomApp[#[&MeasureAppID]]UpdateAvailable 0 "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppInstallDate[#[&MeasureAppID]] "[&MeasureVersionTime]" "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppID[#SlotSelectedIndex] "[&MeasureAppID]" "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!WriteKeyValue Variables [&MeasureAppID] "[#SlotSelectedIndex]" "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!WriteKeyValue Variables HideAppCustomApp[#SlotSelectedIndex] 0 "#SKINSPATH#Droptop\@Resources\GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppPosition [#SlotSelectedIndex] "#SKINSPATH#Droptop Community Apps\Apps\[&MeasureAppID]\Config\MainConfig.inc"][!CommandMeasure Powershell.Startup "Run"][!HideFade]

[Button1]
Meter=Shape
MeterStyle=ButtonShapeStyle | Button1MouseAction#SlotSelected#
Y=(20*#DroptopSize#)R
Hidden=1
Group=Button1 | Page1

[Button1Text]
Meter=String
MeterStyle=ButtonTextStyle
FontColor=255,255,255,255
Text="Add [MeasureAppName0]"
Hidden=1
Group=Button1 | Page1

; ----------------------------------

;UPDATE
[Button2]
Meter=Shape
MeterStyle=ButtonShapeStyle
Y=(160*#DroptopSize#)
LeftMouseDownAction=[!WriteKeyValue Variables CustomApp[#[&MeasureAppID]]UpdateAvailable 0 "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppInstallDate[#[&MeasureAppID]] "[&MeasureVersionTime]" "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!DeactivateConfig]
Hidden=1
Group=Button2 | Page2
Hidden=1

[Button2Text]
Meter=String
MeterStyle=ButtonTextStyle
FontSize=(22*#DroptopSize#)
FontColor=255,255,255,255
Text="Update"
Hidden=1
Group=Button2 | Page2
Hidden=1

;REINSTALL
[Button3]
Meter=Shape
MeterStyle=ButtonShapeStyle
Y=([Button2:YH]+(10*#DroptopSize#))
LeftMouseDownAction=[!WriteKeyValue Variables CustomApp[#[&MeasureAppID]]UpdateAvailable 0 "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppInstallDate[#[&MeasureAppID]] "[&MeasureVersionTime]" "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!CommandMeasure Powershell.Startup "Run"][!HideFade]
Hidden=1
Group=Button3 | Page2
Hidden=1

[Button3Text]
Meter=String
MeterStyle=ButtonTextStyle
FontColor=255,255,255,255
Text="Reset to default settings"
Hidden=1
Group=Button3 | Page2
Hidden=1
