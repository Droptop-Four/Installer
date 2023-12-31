[Rainmeter]
Group=[#CustomAppGroup[#CustomAppPosition][#MyAppIsWebView]]
LeftMouseDownAction=[]
RightMouseDoubleClickAction=[!SkinCustomMenu]

ContextTitle=How to make a Community App
ContextAction=["https://docs.droptopfour.com/community-apps/introduction"]
ContextTitle2=------
ContextAction2=
ContextTitle3=Open Variables.inc
ContextAction3=["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Variables\Variables.inc"]
ContextTitle4=Open VariablesDefault.inc
ContextAction4=["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Variables\VariablesDefault.inc"]
ContextTitle5=Open VariablesData.inc
ContextAction5=["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Variables\VariablesData.inc"]
ContextTitle6=------
ContextAction6=
ContextTitle7=Open BackgroundProcesses.inc
ContextAction7=["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\BackgroundProcesses\BackgroundProcesses.inc"]
ContextTitle8=Open BarModifier folder
ContextAction8=["#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\BarModifier"]
ContextTitle9=------
ContextAction9=
ContextTitle10=Open MainConfig.inc (Main app)
ContextAction10=["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Config\MainConfig.inc"]
ContextTitle11=Open FolderConfig.inc
ContextAction11=["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Folder\Config\FolderConfig.inc"]
ContextTitle12=------
ContextAction12=
ContextTitle13=Open MainConfig.inc (Settings)
ContextAction13=["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Settings\Config\MainConfig.inc"]
ContextTitle14=Open FolderConfig.inc
ContextAction14=["#CONFIGEDITOR#" "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Settings\Folder\Config\FolderConfig.inc"]
ContextTitle15=------
ContextAction15=
ContextTitle16=Open #MyAppName# folder
ContextAction16=["#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#]
ContextTitle17=Open icons folder
ContextAction17=["#CURRENTPATH#Icons"]
ContextTitle18=------
ContextAction18=
ContextTitle19=Edit skin (#CURRENTFILE#)
ContextAction19=["#CONFIGEDITOR#" "#CURRENTPATH##CURRENTFILE#"]

DefaultSavePosition=1
DefaultAlwaysOnTop=1
DefaultDraggable=1
DefaultSnapEdges=1
DefaultStartHidden=1
DefaultAlphaValue=255
DefaultHideOnMouseOver=0
DefaultFadeDuration=105
DefaultClickThrough=0
DefaultKeepOnScreen=1
DefaultAutoSelectScreen=1

[Variables]
NumberOfItems=1
NumberOfDividers=0
NumberOfBoxes=0

@IncludeControl=#SKINSPATH#Droptop\@Resources\GlobalVar\Control.inc
@IncludeUserSettings=#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc
@IncludeThemeOptions=#SKINSPATH#Droptop\@Resources\Themes\#ThemeNum#Settings.inc
@IncludeThemeDesign=#SKINSPATH#Droptop\@Resources\Themes\#ThemeNum#.inc
@IncludeThemeMeasures=#SKINSPATH#Droptop Folders\Other files\Themes\ThemeMeasures.inc
@IncludeSystemTrayMeters=#SKINSPATH#Droptop\@Resources\Meters\SystemTrayMeters.inc
@IncludeLanguage=#SKINSPATH#Droptop\@Resources\GlobalVar\Languages\[#Language[#LanguageNum]].inc
@IncludeVariablesData=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#CustomAppPosition]Num]]\Variables\VariablesData.inc
@IncludeVariablesDefault=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#CustomAppPosition]Num]]\Variables\VariablesDefault.inc
@IncludeVariables=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[#CustomApp[#CustomAppPosition]Num]]\Variables\Variables.inc

HideIcons=0

TopBarBlurType=[#BlurType[#BlurTypeNum][#TopBarSections]]
Padding0=#DropdownItemPadding1#,#DropdownItemPaddingY#,(#DropdownArrowHighlightW#+(10*#DroptopSize#)),(#DropdownItemPaddingY#*-1)

Box1=1
Box2=2
Box3=3
Box4=4
Box5=5

Box99=99

Box1Text=1
Box2Text=2
Box3Text=3
Box4Text=4
Box5Text=5

BoxPosition1=0
BoxPosition2=1
BoxPosition3=2
BoxPosition4=3
BoxPosition5=4

BoxPosition99=2

[CurrentAppX]
Measure=Calc
Formula=[#CustomApp[#CustomAppPosition]X]
DynamicVariables=1
UpdateDivider=-1

[CheckNoAvailableOptions]
Measure=String
String=#ItemText1#
IfMatch=#SettingsNoAppOptions#
IfMatchAction=[!SetOption 1 FontColor "#*TopBarFontColor1*#,(#*DropdownItemOpacity*#/3)"][!SetOption 1Icon ImageAlpha "(#*DropdownItemOpacity*#/3)"][!DisableMouseAction 1 "LeftMouseDownAction|LeftMouseUpAction|MouseOverAction|MouseLeaveAction"]
DynamicVariables=1

[ComLoadAction]
Measure=Calc
Formula=Counter
IfCondition=(ComLoadAction=1)
IfTrueAction=[!WriteKeyValue Variables "[#MyAppID]" "[#CustomAppPosition]" "#SKINSPATH#Droptop\@Resources\GlobalVar\UserSettings.inc"][!SetVariable "[#MyAppID]" "[#CustomAppPosition]" "Droptop\DropdownBar"][!UpdateMeterGroup CustomAppButton "Droptop\DropdownBar"]
UpdateDivider=-1

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
Text=[#ItemText[##CURRENTSECTION#]]
LeftMouseDownAction=[#Action[#ItemIsFolder[##CURRENTSECTION#]]]
Padding=#Padding0#
DynamicVariables=1

[IconStyle]
ImageName=#CURRENTPATH#Icons\[#Icon[#ItemIsFolder[##CURRENTSECTION#]]].png
W=#IconW#
H=#IconW#
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?0:1)
DynamicVariables=1

[ArrowStyleB]
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?([#ItemIsFolder[##CURRENTSECTION#]]=1?0:1):1)
Y=[[##CURRENTSECTION#]:Y]

[BoxStyle]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuCutout#+(3*#DroptopSize#)),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(([#BoxHeight[##CURRENTSECTION#]]*#DroptopSize#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
X=#SysAppMenuXOffset#
Hidden=(#NumberOfBoxes#>=[##CURRENTSECTION#]?0:1)
Y=[Box[#BoxPosition[##CURRENTSECTION#]]:YH]

[BoxTextStyle]
Text=
Padding=
LeftMouseDownAction=
MouseOverAction=
MouseLeaveAction=
X=0
Y=0
Hidden=(#NumberOfBoxes#>=[##CURRENTSECTION#]?0:1)

[TextStyle]
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
FontFace=[#FontName[#AltFont[#LanguageNum]]]
FontSize=#DropdownItemFontSize#
FontWeight=#FontWeight#
AntiAlias=#DropdownAntiAlias#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
W=(#DropdownMenuWidth#-([#CURRENTSECTION#:X]*2)+(#SysAppMenuXOffset#*2))
DynamicVariables=1
ClipString=1

;-----------------------------------------

[1]
Meter=String
MeterStyle=#DefaultMeterStyle#
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)

[2]
Meter=String
MeterStyle=#DefaultMeterStyle#

[3]
Meter=String
MeterStyle=#DefaultMeterStyle#

[4]
Meter=String
MeterStyle=#DefaultMeterStyle#

[5]
Meter=String
MeterStyle=#DefaultMeterStyle#

[6]
Meter=String
MeterStyle=#DefaultMeterStyle#

[7]
Meter=String
MeterStyle=#DefaultMeterStyle#

[8]
Meter=String
MeterStyle=#DefaultMeterStyle#

[9]
Meter=String
MeterStyle=#DefaultMeterStyle#

[10]
Meter=String
MeterStyle=#DefaultMeterStyle#

;-----------------------------------------

[1Icon]
Meter=Image
MeterStyle=IconStyle
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#)

[2Icon]
Meter=Image
MeterStyle=IconStyle

[3Icon]
Meter=Image
MeterStyle=IconStyle

[4Icon]
Meter=Image
MeterStyle=IconStyle

[5Icon]
Meter=Image
MeterStyle=IconStyle

[6Icon]
Meter=Image
MeterStyle=IconStyle

[7Icon]
Meter=Image
MeterStyle=IconStyle

[8Icon]
Meter=Image
MeterStyle=IconStyle

[9Icon]
Meter=Image
MeterStyle=IconStyle

[10Icon]
Meter=Image
MeterStyle=IconStyle

;-----------------------------------------

[1Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[2Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[3Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[4Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[5Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[6Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[7Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[8Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[9Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[10Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

;----------------------------------------------------

[Box1]
Meter=Shape
MeterStyle=BoxStyle
Y=[Background:H]

[Box2]
Meter=Shape
MeterStyle=BoxStyle

[Box3]
Meter=Shape
MeterStyle=BoxStyle

[Box4]
Meter=Shape
MeterStyle=BoxStyle

[Box5]
Meter=Shape
MeterStyle=BoxStyle

;----------------------------------------------------

[Box1Text]
Meter=String
MeterStyle=InfoStyle | BoxTextStyle

[Box2Text]
Meter=String
MeterStyle=InfoStyle | BoxTextStyle

[Box3Text]
Meter=String
MeterStyle=InfoStyle | BoxTextStyle

[Box4Text]
Meter=String
MeterStyle=InfoStyle | BoxTextStyle

[Box5Text]
Meter=String
MeterStyle=InfoStyle | BoxTextStyle

;----------------------------------------------------
