[Rainmeter]
OnRefreshAction=[!Zpos 1]

[Metadata]
Name=Droptop Four
Author=Cariboudjan / Thomas Sven Whittaker
Information=The frogurt is also cursed
License=Creative Commons Attribution-Non-Commercial-Share Alike 3.0

[Variables]
SettingsMenuNumber=1.7.1

16=1
32=2

DropdownItemPadding1=(63*#DroptopSize#)
DropdownIconXoffset=(34*#DroptopSize#)

;----------------------------------
LuaLoc=#@#Scripts\Lua\DropScroll.lua
;----------------------------------
NumberOfItems=5

MaxItem=5

ScrollTracker=5
AboveTotal=1

1Match=1
2Match=2
3Match=3
4Match=4
5Match=5

MeasureAppName1=1
MeasureAppName2=2
MeasureAppName3=3
MeasureAppName4=4
MeasureAppName5=5

ContentFade=1

W=0
U=[!UpdateMeasureGroup Animation][!UpdateMeterGroup Animation][!Redraw]


[ScrollCheck]
Measure=Calc
IfCondition=AnalyzeTotal = #ScrollTracker#
IfTrueAction=[!SetOptionGroup Items MouseScrollDownAction """[]"""][!DisableMouseAction DownArrow "LeftMouseDownAction|MouseOverAction"]
IfFalseAction=[!SetOptionGroup Items MouseScrollDownAction ""][!EnableMouseAction DownArrow "LeftMouseDownAction|MouseOverAction"]
IfCondition2=#ScrollTracker# = #MaxItem#
IfTrueAction2=[!SetOptionGroup Items MouseScrollUpAction """[]"""][!DisableMouseAction UpArrow "LeftMouseDownAction|MouseOverAction"]
IfFalseAction2=[!SetOptionGroup Items MouseScrollUpAction ""][!EnableMouseAction UpArrow "LeftMouseDownAction|MouseOverAction"]
DynamicVariables=1

; [ScrollTimer]
; Measure=Plugin
; Plugin=ActionTimer
; ActionList1=Start1|Wait 120|Start2|Repeat ContentFade,#W#,9|Finish
; Start1=
; Start2=[!UpdateMeasureGroup IconImage][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]
; ContentFade=[!SetVariable ContentFade "(Clamp([#ContentFade]+0.1,0,1))"]#U#
; Finish=[!SetVariable ContentFade 1][!UpdateMeasureGroup IconImage][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!SetOptionGroup ArrowIcon ImageAlpha (#*DropdownItemOpacity*#/3)][!UpdateMeterGroup ItemIcon][!UpdateMeterGroup ArrowIcon]
; DynamicVariables=1
; IgnoreWarnings=1

; [ScrollTimer]
; Measure=Plugin
; Plugin=ActionTimer
; Group=Animation
; ActionList1=Start1|Wait 120|Start2|Repeat ContentFade,#W#,9|Finish
; Start1=
; Start2=[!UpdateMeasureGroup IconImage][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]
; ContentFade=[!SetVariable ContentFade "(Clamp(#ContentFade#+0.1,0,1))"]#U#
; Finish=[!SetVariable ContentFade 1][!UpdateMeasureGroup IconImage][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]#U#
; DynamicVariables=1
; IgnoreWarnings=1

[ScrollTimer]
Measure=Plugin
Plugin=ActionTimer
Group=Animation
ActionList1=Start1|Wait 100|Start2|Wait 10|Repeat ContentFade,#W#,9|Wait 10|Finish
Start1=
Start2=[!UpdateMeasureGroup IconImage][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]
ContentFade=[!SetVariable ContentFade "(Clamp(#ContentFade#+0.1,0,1))"]#U#
Finish=[!SetVariable ContentFade 1][!SetOptionGroup ItemIcon ImageAlpha #*DropdownItemOpacity*#][!UpdateMeterGroup ItemIcon]#U#
DynamicVariables=1
IgnoreWarnings=1

;----------------------------------------------------
; Styles
;----------------------------------------------------

[InfoStyle]
MeasureName=MeasureAppName#CURRENTSECTION#
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#*#ContentFade#)
FontFace=[#FontName[#AltFont[#LanguageNum]]]
FontSize=#DropdownItemFontSize#
X=(1+(#DropdownMenuWidth#*#RTLText#))
Y=R
H=#DropdownItemHeight#
AntiAlias=#DropdownAntiAlias#
LeftMouseDownAction=
RightMouseDownAction=[!CommandMeasure mIndex#CURRENTSECTION#Name "ContextMenu"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideMeter HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
MiddleMouseDownAction=[!CommandMeasure mIndex#CURRENTSECTION#Name "Open"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!Hide "#CURRENTCONFIG#"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
; MouseScrollUpAction=[!CommandMeasure mPath "PageUp"][!SetVariable ScrollTracker ([#ScrollTracker]-([#ScrollTracker]-[#MaxItem]<=[#MaxItem]?([#ScrollTracker]-[#MaxItem]):[#MaxItem]))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-[#MaxItem])][!HideGroup Folder02][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Execute 1"]
; MouseScrollDownAction=[!CommandMeasure mPath "PageDown"][!SetVariable ScrollTracker ([#ScrollTracker]+([&AnalyzeTotal]>[#MaxItem]?([#ScrollTracker]+[#MaxItem]>=[&AnalyzeTotal]?([&AnalyzeTotal]-[#ScrollTracker]):[#MaxItem]):0))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!HideGroup Folder02][!UpdateMeasureGroup Scrollbar][!HideMeter HighlightSelected][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha "(#*DropdownItemOpacity*#/5)"][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Execute 1"]

MouseScrollUpAction=[!CommandMeasure mPath "PageUp"][!SetVariable ScrollTracker (#ScrollTracker#<=#MaxItem#?#MaxItem#:(#ScrollTracker#-#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha (#*DropdownItemOpacity*#/5)][!SetOptionGroup ArrowIcon ImageAlpha (#*DropdownItemOpacity*#/5)][!UpdateMeasure *][!UpdateMeter *][!Redraw][#StopMode[#StopModeNum]][!CommandMeasure ScrollTimer "Execute 1"]
MouseScrollDownAction=[!CommandMeasure mPath "PageDown"][!SetVariable ScrollTracker (#ScrollTracker#>=[AnalyzeTotal]?[AnalyzeTotal]:(#ScrollTracker#+#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha (#*DropdownItemOpacity*#/5)][!SetOptionGroup ArrowIcon ImageAlpha (#*DropdownItemOpacity*#/5)][!UpdateMeasure *][!UpdateMeter *][!Redraw][!CommandMeasure ScrollTimer "Execute 1"]

MouseOverAction=[!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#ArrowIcon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#ArrowIcon ImageAlpha "#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#*#*ContentFade*#)"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#ArrowIcon][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#ArrowIcon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#ArrowIcon ImageAlpha "(#*DropdownItemOpacity*#/3)"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#*#*ContentFade*#)"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#ArrowIcon][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
UpdateDivider=-1
ClipString=1
Hidden=1
; Group=Items

[IconStyle]
MeasureName=mIndex[##CURRENTSECTION#]Name
ImageName=#SKINSPATH#Droptop Community Apps\Apps\%1\Button\Medium\Button.png
X=(#DropdownIconXoffset#+((#DropdownMenuWidth#-#DropdownIconXoffset#-#IconW#-#DropdownHLOffsetX#-(#DropdownIconPadding#*2))*#RTLText#))
Y=R
W=#IconW#
H=#IconH#
PreserveAspectRatio=1
ImageCrop=-16,-16,32,32,5
ImageAlpha=#DropdownItemOpacity#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
UpdateDivider=-1
Hidden=1

[6Icon]
Meter=Image
MeterStyle=None
Group=6 | 7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes

[7Icon]
Meter=Image
MeterStyle=None
Group=7 | 8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes | SupporterFolders

[8Icon]
Meter=Image
MeterStyle=None
Group=8 | 9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes | SupporterFolders

[9Icon]
Meter=Image
MeterStyle=None
Group=9 | 10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes | SupporterFolders

[10Icon]
Meter=Image
MeterStyle=None
Group=10 | 11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes | SupporterFolders

[11Icon]
Meter=Image
MeterStyle=None
Group=11 | 12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes | SupporterFolders

[12Icon]
Meter=Image
MeterStyle=None
Group=12 | 13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes | SupporterFolders

[13Icon]
Meter=Image
MeterStyle=None
Group=13 | 14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes

[14Icon]
Meter=Image
MeterStyle=None
Group=14 | 15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes

[15Icon]
Meter=Image
MeterStyle=None
Group=15 | 16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes

[16Icon]
Meter=Image
MeterStyle=None
Group=16 | 17 | 18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes

[17Icon]
Meter=Image
MeterStyle=None
Group=17 | 18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes

[18Icon]
Meter=Image
MeterStyle=None
Group=18 | 19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes

[19Icon]
Meter=Image
MeterStyle=None
Group=19 | 20 | 21 | 22 | 23 | ItemIcon | SupporterThemes

[20Icon]
Meter=Image
MeterStyle=None
Group=20 | 21 | 22 | 23 | ItemIcon | SupporterThemes

[21Icon]
Meter=Image
MeterStyle=None
Group=21 | 22 | 23 | ItemIcon | SupporterThemes

[22Icon]
Meter=Image
MeterStyle=None
Group=22 | 23 | ItemIcon | SupporterThemes

[23Icon]
Meter=Image
MeterStyle=None
Group=23 | ItemIcon

;----------------------------------------------------
; Measures
;----------------------------------------------------

[mPath]
Measure=Plugin
Plugin=FileView
Path="#SKINSPATH#Droptop Community Apps\Apps\"
ShowDotDot=0
SortType=Name
SortAscending=1
SortDateType=
ShowFile=0
ShowFolder=1
ShowSystem=0
ShowHidden=0
HideExtensions=0
;WildCardSearch="**"
;Recursive=0
Count=#MaxItem#
FinishAction=[!UpdateMeterGroup Items][!Redraw]

;----------------------------------------------------

[FolderCount]
Measure=Plugin
Plugin=FolderInfo
Folder="[mPath]"
InfoType=FolderCount
IncludeHiddenFiles=0
IncludeSubFolders=0
IncludeSystemFiles=1
DynamicVariables=1

[AnalyzeTotal]
Measure=Calc
Formula=FolderCount
IfCondition=(#CURRENTSECTION# > #NumberOfItems#) && (#NumberOfItems# < #MaxItem#)
IfTrueAction=[!WriteKeyValue Variables NumberOfItems ([#CURRENTSECTION#]=0?1:[#CURRENTSECTION#]) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenuModule\CustomAppSelect.inc"][!Refresh]
IfCondition2=#CURRENTSECTION# > #MaxItem#
IfTrueAction2=[!WriteKeyValue Variables AboveTotal 1 "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenuModule\CustomAppSelect.inc"][!WriteKeyValue Variables NumberOfItems #MaxItem# "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenuModule\CustomAppSelect.inc"][!SetVariable AboveTotal 1][!SetVariable NumberOfItems #MaxItem#][!ShowMeterGroup #MaxItem#][!EnableMeasureGroup Scrollbar][!ShowMeterGroup Scrollbar][!UpdateMeasure *][!UpdateMeter *][!Redraw]
IfFalseAction2=[!WriteKeyValue Variables AboveTotal 0 "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenuModule\CustomAppSelect.inc"][!WriteKeyValue Variables NumberOfItems ([#CURRENTSECTION#]=0?1:[#CURRENTSECTION#]) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenuModule\CustomAppSelect.inc"][!SetVariable AboveTotal 1][!SetVariable NumberOfItems ([#CURRENTSECTION#]=0?1:[#CURRENTSECTION#])][!ShowMeterGroup [#CURRENTSECTION#]]

[AnalyzeTotal]
Measure=Calc
Formula=FolderCount
IfCondition=FolderCount > #MaxItem#
IfTrueAction=[!EnableMeasureGroup Scrollbar][!ShowMeterGroup Scrollbar]
IfFalseAction=[!DisableMeasureGroup Scrollbar][!HideMeterGroup Scrollbar]
DynamicVariables=1

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

[Background]
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(#DropdownMenuLandingHeight#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#

;----------------------------------------------------
; Index 1

[mIndex1Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=1
Substitute=" ":""

;----------------------------------------------------
; Index 2

[mIndex2Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=2
Substitute=" ":""

;----------------------------------------------------
; Index 3

[mIndex3Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=3
Substitute=" ":""

;----------------------------------------------------
; Index 4

[mIndex4Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=4
Substitute=" ":""

;----------------------------------------------------
; Index 5

[mIndex5Name]
Measure=Plugin
Plugin=FileView
Path=[mPath]
Type=FileName
Index=5
Substitute=" ":""

;----------------------------------------------------

[MeasureAppName1]
Measure=String
String=[&mIndex[##CURRENTSECTION#]Name]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName2]
Measure=String
String=[&mIndex[##CURRENTSECTION#]Name]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName3]
Measure=String
String=[&mIndex[##CURRENTSECTION#]Name]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName4]
Measure=String
String=[&mIndex[##CURRENTSECTION#]Name]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName5]
Measure=String
String=[&mIndex[##CURRENTSECTION#]Name]
Substitute="_":" ","-":" - "
DynamicVariables=1

;----------------------------------------------------

[1Match]
Measure=String
String="[&mIndex[##CURRENTSECTION#]Name]"
IfMatch=[#CustomAppID1]|[#CustomAppID2]|[#CustomAppID3]|[#CustomAppID4]|[#CustomAppID5]
IfMatchAction=[!SetOption [##CURRENTSECTION#] LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp[#[&mIndex[#*CURRENTSECTION*]Name]] [#HideAppCustomApp[#*SettingsMenuIndex*]] "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables HideAppCustomApp#*SettingsMenuIndex*# 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID#*SettingsMenuIndex*# "[&mIndex[#*CURRENTSECTION*]Name]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppID[#[&mIndex[#*CURRENTSECTION*]Name]] "[#CustomAppID[#*SettingsMenuIndex*]]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables [&mIndex[#*CURRENTSECTION*]Name] #*SettingsMenuIndex*# "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables [#CustomAppID[#*SettingsMenuIndex*]] [#[&mIndex[#*CURRENTSECTION*]Name]] "#@#GlobalVar\UserSettings.inc"][!RefreshGroup SM2]"""]
IfNotMatchAction=[!SetOption [##CURRENTSECTION#] LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp#*SettingsMenuIndex*# 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID#*SettingsMenuIndex*# "[&mIndex[#*CURRENTSECTION*]Name]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables [&mIndex[#*CURRENTSECTION*]Name] #*SettingsMenuIndex*# "#@#GlobalVar\UserSettings.inc"][!RefreshGroup SM2]"""]
DynamicVariables=1

[2Match]
Measure=String
String="[&mIndex[##CURRENTSECTION#]Name]"
IfMatch=[#CustomAppID1]|[#CustomAppID2]|[#CustomAppID3]|[#CustomAppID4]|[#CustomAppID5]
IfMatchAction=[!SetOption [##CURRENTSECTION#] LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp[#[&mIndex[#*CURRENTSECTION*]Name]] [#HideAppCustomApp[#*SettingsMenuIndex*]] "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables HideAppCustomApp#*SettingsMenuIndex*# 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID#*SettingsMenuIndex*# "[&mIndex[#*CURRENTSECTION*]Name]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppID[#[&mIndex[#*CURRENTSECTION*]Name]] "[#CustomAppID[#*SettingsMenuIndex*]]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables [&mIndex[#*CURRENTSECTION*]Name] #*SettingsMenuIndex*# "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables [#CustomAppID[#*SettingsMenuIndex*]] [#[&mIndex[#*CURRENTSECTION*]Name]] "#@#GlobalVar\UserSettings.inc"][!RefreshGroup SM2]"""]
IfNotMatchAction=[!SetOption [##CURRENTSECTION#] LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp#*SettingsMenuIndex*# 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID#*SettingsMenuIndex*# "[&mIndex[#*CURRENTSECTION*]Name]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables [&mIndex[#*CURRENTSECTION*]Name] #*SettingsMenuIndex*# "#@#GlobalVar\UserSettings.inc"][!RefreshGroup SM2]"""]
DynamicVariables=1

[3Match]
Measure=String
String="[&mIndex[##CURRENTSECTION#]Name]"
IfMatch=[#CustomAppID1]|[#CustomAppID2]|[#CustomAppID3]|[#CustomAppID4]|[#CustomAppID5]
IfMatchAction=[!SetOption [##CURRENTSECTION#] LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp[#[&mIndex[#*CURRENTSECTION*]Name]] [#HideAppCustomApp[#*SettingsMenuIndex*]] "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables HideAppCustomApp#*SettingsMenuIndex*# 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID#*SettingsMenuIndex*# "[&mIndex[#*CURRENTSECTION*]Name]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppID[#[&mIndex[#*CURRENTSECTION*]Name]] "[#CustomAppID[#*SettingsMenuIndex*]]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables [&mIndex[#*CURRENTSECTION*]Name] #*SettingsMenuIndex*# "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables [#CustomAppID[#*SettingsMenuIndex*]] [#[&mIndex[#*CURRENTSECTION*]Name]] "#@#GlobalVar\UserSettings.inc"][!RefreshGroup SM2]"""]
IfNotMatchAction=[!SetOption [##CURRENTSECTION#] LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp#*SettingsMenuIndex*# 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID#*SettingsMenuIndex*# "[&mIndex[#*CURRENTSECTION*]Name]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables [&mIndex[#*CURRENTSECTION*]Name] #*SettingsMenuIndex*# "#@#GlobalVar\UserSettings.inc"][!RefreshGroup SM2]"""]
DynamicVariables=1

[4Match]
Measure=String
String="[&mIndex[##CURRENTSECTION#]Name]"
IfMatch=[#CustomAppID1]|[#CustomAppID2]|[#CustomAppID3]|[#CustomAppID4]|[#CustomAppID5]
IfMatchAction=[!SetOption [##CURRENTSECTION#] LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp[#[&mIndex[#*CURRENTSECTION*]Name]] [#HideAppCustomApp[#*SettingsMenuIndex*]] "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables HideAppCustomApp#*SettingsMenuIndex*# 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID#*SettingsMenuIndex*# "[&mIndex[#*CURRENTSECTION*]Name]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppID[#[&mIndex[#*CURRENTSECTION*]Name]] "[#CustomAppID[#*SettingsMenuIndex*]]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables [&mIndex[#*CURRENTSECTION*]Name] #*SettingsMenuIndex*# "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables [#CustomAppID[#*SettingsMenuIndex*]] [#[&mIndex[#*CURRENTSECTION*]Name]] "#@#GlobalVar\UserSettings.inc"][!RefreshGroup SM2]"""]
IfNotMatchAction=[!SetOption [##CURRENTSECTION#] LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp#*SettingsMenuIndex*# 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID#*SettingsMenuIndex*# "[&mIndex[#*CURRENTSECTION*]Name]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables [&mIndex[#*CURRENTSECTION*]Name] #*SettingsMenuIndex*# "#@#GlobalVar\UserSettings.inc"][!RefreshGroup SM2]"""]
DynamicVariables=1

[5Match]
Measure=String
String="[&mIndex[##CURRENTSECTION#]Name]"
IfMatch=[#CustomAppID1]|[#CustomAppID2]|[#CustomAppID3]|[#CustomAppID4]|[#CustomAppID5]
IfMatchAction=[!SetOption [##CURRENTSECTION#] LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp[#[&mIndex[#*CURRENTSECTION*]Name]] [#HideAppCustomApp[#*SettingsMenuIndex*]] "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables HideAppCustomApp#*SettingsMenuIndex*# 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID#*SettingsMenuIndex*# "[&mIndex[#*CURRENTSECTION*]Name]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppID[#[&mIndex[#*CURRENTSECTION*]Name]] "[#CustomAppID[#*SettingsMenuIndex*]]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables [&mIndex[#*CURRENTSECTION*]Name] #*SettingsMenuIndex*# "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables [#CustomAppID[#*SettingsMenuIndex*]] [#[&mIndex[#*CURRENTSECTION*]Name]] "#@#GlobalVar\UserSettings.inc"][!RefreshGroup SM2]"""]
IfNotMatchAction=[!SetOption [##CURRENTSECTION#] LeftMouseDownAction """#*OptionChanged.Suite*#[!WriteKeyValue Variables HideAppCustomApp#*SettingsMenuIndex*# 0 "#@#GlobalVar\FolderSettings.inc"][!WriteKeyValue Variables CustomAppID#*SettingsMenuIndex*# "[&mIndex[#*CURRENTSECTION*]Name]" "#@#GlobalVar\UserSettings.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Config\MainConfig.inc"][!WriteKeyValue Variables CustomAppPosition #*SettingsMenuIndex*# "#SKINSPATH#Droptop Community Apps\Apps\[&mIndex[#*CURRENTSECTION*]Name]\Settings\Folder\Config\FolderConfig.inc"][!WriteKeyValue Variables [&mIndex[#*CURRENTSECTION*]Name] #*SettingsMenuIndex*# "#@#GlobalVar\UserSettings.inc"][!RefreshGroup SM2]"""]
DynamicVariables=1

;----------------------------------------------------

[ArrowIconStyle]
ImageAlpha=(#DropdownItemOpacity#/3)
ImageName=#@#Icons\Fixed\Medium\leftarrow.png
Hidden=0
X=r
; Group=ArrowIcon

[1ArrowIcon]
Meter=Image
MeterStyle=IconStyle | ArrowIconStyle
X=(#DropdownIconXoffset#+((#DropdownMenuWidth#-#DropdownIconXoffset#-#IconW#-#DropdownHLOffsetX#-(#DropdownIconPadding#*2))*#RTLText#)-(25*#DroptopSize#))
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)

[2ArrowIcon]
Meter=Image
MeterStyle=IconStyle | ArrowIconStyle

[3ArrowIcon]
Meter=Image
MeterStyle=IconStyle | ArrowIconStyle

[4ArrowIcon]
Meter=Image
MeterStyle=IconStyle | ArrowIconStyle

[5ArrowIcon]
Meter=Image
MeterStyle=IconStyle | ArrowIconStyle

;----------------------------------------------------
; Scrollbar
;----------------------------------------------------

[ScrollbarTop]
Meter=Image
X=3
Y=(#DropdownIconYoffset#-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#-1)
UpdateDivider=-1

[Size]
Measure=Calc
Formula=((#DropdownItemHeight#*#MaxItem#)-#DropdownIconYoffset#)
UpdateDivider=-1
Group=Scrollbar

[ScrollH]
Measure=Calc
Formula=Size * (#MaxItem# / (AnalyzeTotal = 0 ? 1 : AnalyzeTotal))
Group=Scrollbar
Disabled=1

[ScrollbarScript]
Measure=Script
ScriptFile=#LuaLoc#
UpdateDivider=-1

[CurrentPos]
Meter=Shape
Shape=Rectangle 0,0,(3*#DroptopSize#),([ScrollH]<1?1:[ScrollH]),2 | Fill Color #DropdownFontColor1#,155 | StrokeWidth 0 | StrokeColor #DropdownBGColor1#,55
X=(#DropdownMenuWidth#-(3*#DroptopSize#)-(#DropdownStrokeWidth#/2))
Y=(#DropdownIconYoffset#-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+1)
DynamicVariables=1
Group=ScrollBar | Items
Hidden=1

;-------------------------------------------

[OpenFolder]
Meter=Image
ImageName=#@#Icons\Fixed\Medium\dot.png
ImageTint=#DropdownFontColor1#,#DropdownItemOpacity#
ImageAlpha=(#DropdownItemOpacity#/3)
X=(8*#DroptopSize#)
Y=(#DropdownIconYoffset#-(#DropdownIconYoffset#%1)+#DropdownItemYOffset#+(#DropdownItemHeight#*#NumberOfItems#)+((#DropdownMenuLandingHeight#-(16*#DroptopSize#))/2))
H=(16*#DroptopSize#)
LeftMouseDownAction=[!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!Hide "Droptop\Other\Apps\Home"][!HideGroup Tray][!HideGroup ContextBox][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]["[mPath]"]
MouseOverAction=[!SetOption #CURRENTSECTION# ImageName "#@#Icons\Fixed\Medium\open.png"][!SetOption #CURRENTSECTION# ImageAlpha #DropdownItemOpacity#][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# ImageName "#@#Icons\Fixed\Medium\dot.png"][!SetOption #CURRENTSECTION# ImageAlpha (#*DropdownItemOpacity*#/3)][!UpdateMeter #CURRENTSECTION#][!Redraw]
DynamicVariables=1
UpdateDivider=-1

[DownArrow]
Meter=Shape
Shape=Rectangle (-5*#DroptopSize#),(-1*#DroptopSize#),(21*#DroptopSize#),(21*#DroptopSize#),0 | Fill Color 0,0,0,0 | StrokeWidth 0
Shape2=Rectangle 0,(-1*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45 | Extend Look
Shape3=Rectangle 0,(-3*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45
Shape4=Combine Shape2 | Exclude Shape3
Look=Fill Color #DropdownFontColor1#,(#ScrollTracker#>=[AnalyzeTotal]?0:(#DropdownItemOpacity#/3))
LeftMouseDownAction=[!CommandMeasure mPath "PageDown"][!SetVariable ScrollTracker (#ScrollTracker#>=[AnalyzeTotal]?[AnalyzeTotal]:(#ScrollTracker#+#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha (#*DropdownItemOpacity*#/5)][!SetOptionGroup ArrowIcon ImageAlpha (#*DropdownItemOpacity*#/5)][!UpdateMeasure *][!UpdateMeter *][!Redraw][#StopMode[#StopModeNum]][!CommandMeasure ScrollTimer "Execute 1"]
MouseOverAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#>=[AnalyzeTotal]?0:#DropdownItemOpacity#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#>=[AnalyzeTotal]?0:(#DropdownItemOpacity#/3))"][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=(#DropdownMenuWidth#-(25*#DroptopSize#))
Y=r
DynamicVariables=1

[UpArrow]
Meter=Shape
Shape=Rectangle (-5*#DroptopSize#),(-1*#DroptopSize#),(21*#DroptopSize#),(21*#DroptopSize#),0 | Fill Color 0,0,0,0 | StrokeWidth 0
Shape2=Rectangle 0,(6*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45 | Extend Look
Shape3=Rectangle 0,(8*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45
Shape4=Combine Shape2 | Exclude Shape3
Look=Fill Color #DropdownFontColor1#,(#ScrollTracker#<=#MaxItem#?0:(#DropdownItemOpacity#/3))
LeftMouseDownAction=[!CommandMeasure mPath "PageUp"][!SetVariable ScrollTracker (#ScrollTracker#<=#MaxItem#?#MaxItem#:(#ScrollTracker#-#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!SetVariable ContentFade 0.1][!SetOptionGroup ItemIcon ImageAlpha (#*DropdownItemOpacity*#/5)][!SetOptionGroup ArrowIcon ImageAlpha (#*DropdownItemOpacity*#/5)][!UpdateMeasure *][!UpdateMeter *][!Redraw][#StopMode[#StopModeNum]][!CommandMeasure ScrollTimer "Execute 1"]
MouseOverAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#<=#MaxItem#?0:#DropdownItemOpacity#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#<=#MaxItem#?0:(#DropdownItemOpacity#/3))"][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=(#DropdownMenuWidth#-(45*#DroptopSize#))
Y=r
DynamicVariables=1
