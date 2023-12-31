[Rainmeter]
MouseActionCursor=Arrow
OnFocusAction=[!SetVariable Focused 1 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure Focus "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MouseY "Droptop\Other\BackgroundProcesses"]
OnUnfocusAction=[!SetVariable Focused 0 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureIsFullScreen "Droptop\Other\BackgroundProcesses"]
OnRefreshAction=[!UpdateMeasureGroup Scrollbar][!UpdateMeterGroup Scrollbar]
RightMouseDownAction=[]
LeftMouseDownAction=[]
DynamicWindowSize=1
Update=-1
MouseLeaveAction=

DefaultKeepOnScreen=1

[Variables]
MenuBlur=#DropdownMenuBlur#

LuaLoc=#@#Scripts\Lua\DropScroll.lua

;-----------------------------------
; Padding0=(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),#DropdownItemPaddingY#,#DropdownItemPadding2#,(#DropdownItemPaddingY#*-1)
Padding0=(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
; Padding1=#DropdownItemPadding2#,#DropdownItemPaddingY#,(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),(#DropdownItemPaddingY#*-1)
Padding1=#DropdownArrowHighlightW#,#DropdownItemPaddingY#,(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#),(#DropdownItemPaddingY#*-1)
;---
; Padding0B=#DropdownItemPadding1#,#DropdownItemPaddingY#,#DropdownItemPadding2#,(#DropdownItemPaddingY#*-1)
Padding0B=#DropdownItemPadding1#,#DropdownItemPaddingY#,#DropdownArrowHighlightW#,(#DropdownItemPaddingY#*-1)
Padding1B=(#DropdownItemPadding1#*2),#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
;-----------------------------------

MaxItem=20
ScrollTracker=#MaxItem#

1Scroll=1
2Scroll=2
3Scroll=3
4Scroll=4
5Scroll=5
6Scroll=6
7Scroll=7
8Scroll=8
9Scroll=9
10Scroll=10
11Scroll=11
12Scroll=12
13Scroll=13
14Scroll=14
15Scroll=15
16Scroll=16
17Scroll=17
18Scroll=18
19Scroll=19
20Scroll=20

ScrollUpAction0=
ScrollUpAction1=[!CommandMeasure MeasureActionTimer "Stop 1"][!SetVariable ScrollTracker ([#*ScrollTracker*]-([#*ScrollTracker*]-#MaxItem#<=#MaxItem#?([#*ScrollTracker*]-#MaxItem#):#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!#Hide#Group SM[#*MenubarInfo.NextFolder*]][!SetOptionGroup Items FontColor "[#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!SetOptionGroup Icons FontColor "[#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!SetOptionGroup Arrows FillColor "Fill Color [#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!HideMeter HighlightBackground][!HideMeter HighlightSelected][!UpdateMeasure *][!UpdateMeter *][!Redraw]

ScrollDownAction0=
ScrollDownAction1=[!CommandMeasure MeasureActionTimer "Stop 1"][!SetVariable ScrollTracker ([#*ScrollTracker*]+([#*ScrollTracker*]+#MaxItem#>=[&GetMenuInfo:Count([#*FolderIndex*])]?([&GetMenuInfo:Count([#*FolderIndex*])]-[#*ScrollTracker*]):#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!SetOptionGroup Items FontColor "[#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!SetOptionGroup Icons FontColor "[#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!SetOptionGroup Arrows FillColor "Fill Color [#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!#Hide#Group SM[#*MenubarInfo.NextFolder*]][!HideMeter HighlightBackground][!HideMeter HighlightSelected][!UpdateMeasure *][!UpdateMeter *][!Redraw]

FlatTopShape0=
FlatTopShape1=[#*FlatTopShape*]

[BlurBehind]
Measure=Plugin
Plugin=FrostedGlass
BlurEnabled=(#ForceOpaque#=1?0:#DropdownMenuBlur#)
Type=[#BlurType[#BlurTypeNum]0]
Border=[#Shadows[#DropdownMenuShadow]]
Corner=[#BlurCorner[#DropdownRoundCorners]]

[MeasureActionTimer]
Measure=Plugin
Plugin=ActionTimer
Group=Animation
ActionList1=Wait [#FolderMouseOverTime[#FolderMouseOverTimeNum]]|FolderMouseOver
; ActionList1=Wait #FolderMouseOverTime#|FolderMouseOver
FolderMouseOver=
DynamicVariables=1
IgnoreWarnings=1
Disabled=1

[1Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[2Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[3Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[4Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[5Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[6Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[7Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[8Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[9Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[10Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[11Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[12Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[13Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[14Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[15Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[16Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[17Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[18Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[19Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

[20Scroll]
Measure=Calc
Formula=([##CURRENTSECTION#]+([#ScrollTracker]-#MaxItem#))
DynamicVariables=1

;----------------------------------------------------
; Styles
;----------------------------------------------------

[InfoStyle]
StringAlign=#TextDirection#Center
FontFace=[#FontName[#AltFont[#LanguageNum]]]
FontSize=#DropdownItemFontSize#
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
InlineSetting2=[#DropdownTextShadow[#DropdownFontShadow][#ChamLum1]]
StringEffect=#DropdownStringEffect#
FontEffectColor=#DropdownFontEffectColor#
X=(1+(#DropdownMenuWidth#*#RTLText#)+#SysAppMenuXOffset#)
Y=R
; W=(#DropdownMenuWidth#+#SysAppMenuWOffset#-#DropdownItemPadding2#-#DropdownItemPadding1#+(#DropdownItemPadding1#*#HideIcons#))
W=(#DropdownMenuWidth#-#DropdownArrowHighlightW#-(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#))
H=#DropdownItemHeight#
Text=[&GetMenuInfo:Text(#MenubarInfo.ItemName#)]
MouseScrollDownAction=[!SetVariable Scrollable (#ScrollTracker#>=[&GetMenuInfo:Count([#FolderIndex])]?0:1)][#ScrollDownAction[#Scrollable]]
MouseScrollUpAction=[!SetVariable Scrollable (#ScrollTracker#<=#MaxItem#?0:1)][#ScrollUpAction[#Scrollable]]
FontWeight=#FontWeight#
Padding=[#Padding[#RTLText]]
AntiAlias=#DropdownAntiAlias#
Hidden=(#NumberOfItems#>=#CURRENTSECTION#?0:1)
DynamicVariables=1
ClipString=1
Group=Items
RightMouseUpAction=[!HideGroup SM#MenubarInfo.NextFolder#][!CommandMeasure MeasureActionTimer "Stop 1"][!SetVariable MenubarInfoExpanded ([#MenubarInfoExpanded]=1?0:1)][!SetVariable DropdownMenuWidth ([#MenubarInfoExpandable]=1?([#MenubarInfoExpanded]=1?(#DropdownMenuWidth#*3):(#DropdownMenuWidth#/3)):#DropdownMenuWidth#)][!HideMeter HighlightSelected][!Update]

[GetMenuInfo]
Measure=Plugin
Plugin=MenubarInfo
MenuUpdateAction=[!UpdateMeter *][!Redraw]
MenuDestroyAction=[!UpdateMeter *][!Redraw]

[IsSeparator0]

[IsSeparator1]
InlinePattern2=—
InlineSetting2=Color | #DropdownFontColor1#,(#DropdownItemOpacity#/5)
Text=———————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————————
Prefix=""
ClipString=0
LeftMouseDownAction=
MouseOverAction=[]
MouseLeaveAction=[]
Padding=0,0,0,0
X=-10

[IsDisabled0]

[IsDisabled1]
InlineSetting2=Color | #DropdownFontColor1#,(#DropdownItemOpacity#/3)
LeftMouseDownAction=[]
MouseOverAction=[]
MouseLeaveAction=[]
Group=Disabled

[FolderStyle0]
LeftMouseDownAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!SetVariable ActiveAll 0 "Droptop\DropdownBar"][!SetVariable ActiveTray 0 "Droptop\DropdownBar"][!HideMeterGroup HighlightSelected "Droptop\DropdownBar"][!HideGroup Tray][!UpdateMeter * "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!CommandMeasure GetMenuInfo "Command #MenubarInfo.CommandIndex#"]
MouseOverAction=[!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon FontColor "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#-(#*HighlightFontOpacity2*#*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]
MouseLeaveAction=[!HideMeter HighlightBackground][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Icon FontColor "#*DropdownFontColor1*#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]

[FolderStyle1]
LeftMouseDownAction=[!HideGroup Submenus][!HideGroup SM#MenubarInfo.NextFolder#][!DeactivateConfig "#CURRENTCONFIG#\Folder"][!SetVariable MenubarInfoExpanded 0][!SetVariable DropdownMenuWidth ([#MenubarInfoExpandable]=1?(#MenubarInfoExpanded#=1?(#DropdownMenuWidth#/3):#DropdownMenuWidth#):#DropdownMenuWidth#)][!CommandMeasure MeasureActionTimer "Stop 1"][!WriteKeyValue Variables SelectedFolderX [#CURRENTCONFIGX] "#SKINSPATH##CURRENTCONFIG#\Folder\Folder0#MenubarInfo.NextFolder#.ini"][!WriteKeyValue Variables SelectedFolderY [#CurrentSubFolder#:Y] "#SKINSPATH##CURRENTCONFIG#\Folder\Folder0#MenubarInfo.NextFolder#.ini"][!WriteKeyValue Variables NumberOfItems "[&GetMenuInfo:Count(#MenubarInfo.FolderIndex#)]" "#SKINSPATH##CURRENTCONFIG#\Folder\Folder0#MenubarInfo.NextFolder#.ini"][!WriteKeyValue Variables FolderIndex "#MenubarInfo.FolderIndex#" "#SKINSPATH##CURRENTCONFIG#\Folder\Folder0#MenubarInfo.NextFolder#.ini"][!WriteKeyValue Variables CommandIndex "#MenubarInfo.CommandIndex#" "#SKINSPATH##CURRENTCONFIG#\Folder\Folder0#MenubarInfo.NextFolder#.ini"][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [#CURRENTSECTION#:Y]][!Hide "#CURRENTCONFIG#\Folder"][!ActivateConfig "#CURRENTCONFIG#\Folder" "Folder0#MenubarInfo.NextFolder#.ini"][!CommandMeasure GetMenuInfo "get [&GetMenuInfo:WindowInfo()]" "#CURRENTCONFIG#\Folder"][!Move ([#CURRENTCONFIGX]+[#DropdownMenuWidth]+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-#DropdownItemYOffset#-(#DropdownStrokeWidth#-(#DropdownStrokeWidth#%1))-1) "#CURRENTCONFIG#\Folder"][!Update][!Delay 105][!#Show# "#CURRENTCONFIG#\Folder"]
MouseOverAction=[!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable ActivateSubFolder1 """[!SetVariable Focused 1 "Droptop\Other\BackgroundProcesses"][!HideGroup Submenus][!HideGroup SM#MenubarInfo.NextFolder#][!DeactivateConfig "#CURRENTCONFIG#\Folder"][!SetVariable MenubarInfoExpanded 0][!SetVariable DropdownMenuWidth ([#MenubarInfoExpandable]=1?(#MenubarInfoExpanded#=1?(#DropdownMenuWidth#/3):#DropdownMenuWidth#):#DropdownMenuWidth#)][!WriteKeyValue Variables SelectedFolderX [#CURRENTCONFIGX] "#SKINSPATH##CURRENTCONFIG#\Folder\Folder0#MenubarInfo.NextFolder#.ini"][!WriteKeyValue Variables SelectedFolderY [#CurrentSubFolder#:Y] "#SKINSPATH##CURRENTCONFIG#\Folder\Folder0#MenubarInfo.NextFolder#.ini"][!WriteKeyValue Variables NumberOfItems "[&GetMenuInfo:Count(#MenubarInfo.FolderIndex#)]" "#SKINSPATH##CURRENTCONFIG#\Folder\Folder0#MenubarInfo.NextFolder#.ini"][!WriteKeyValue Variables FolderIndex "#MenubarInfo.FolderIndex#" "#SKINSPATH##CURRENTCONFIG#\Folder\Folder0#MenubarInfo.NextFolder#.ini"][!WriteKeyValue Variables CommandIndex "#MenubarInfo.CommandIndex#" "#SKINSPATH##CURRENTCONFIG#\Folder\Folder0#MenubarInfo.NextFolder#.ini"][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [#CURRENTSECTION#:Y]][!Hide "#CURRENTCONFIG#\Folder"][!ActivateConfig "#CURRENTCONFIG#\Folder" "Folder0#MenubarInfo.NextFolder#.ini"][!CommandMeasure GetMenuInfo "get [&GetMenuInfo:WindowInfo()]" "#CURRENTCONFIG#\Folder"][!Move ([#CURRENTCONFIGX]+[#*DropdownMenuWidth*]+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-#DropdownItemYOffset#-(#DropdownStrokeWidth#-(#DropdownStrokeWidth#%1))-1) "#CURRENTCONFIG#\Folder"][!Update][!Delay 105][!#Show# "#CURRENTCONFIG#\Folder"]"""][!CommandMeasure MeasureActionTimer "Stop 1"][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 1"]   [!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon FontColor "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#-(#*HighlightFontOpacity2*#*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]
MouseLeaveAction=[!HideMeter HighlightBackground][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Icon FontColor "#*DropdownFontColor1*#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]
@IncludeArrowStyle=#SKINSPATH#Droptop\@Resources\Meters\ArrowStyle\ArrowStyle#DropdownArrowStyle#.ini

[IconStyle]
StringAlign=#TextDirection#Center
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
FontFace=Segoe UI
FontSize=#DropdownItemFontSize#
InlineSetting=[#DropdownTextShadow[#DropdownFontShadow][#ChamLum1]]
StringEffect=#DropdownStringEffect#
FontEffectColor=#DropdownFontEffectColor#
X=(#DropdownIconXoffset#+(#DropdownIconXoffset#+((#DropdownMenuWidth#-#IconW#-#DropdownHLOffsetX#-(#DropdownIconPadding#*2))*#RTLText#))+#SysAppMenuXOffset#+(2*#DroptopSize#))
Y=R
; W=(#DropdownMenuWidth#+#SysAppMenuWOffset#-#DropdownItemPadding2#-#DropdownItemPadding1#+(#DropdownItemPadding1#*#HideIcons#))
W=(#DropdownMenuWidth#-#DropdownArrowHighlightW#-(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#))
H=#DropdownItemHeight#
Text=[#MenubarInfoCheckmark[&GetMenuInfo:IsChecked(#MenubarInfo.ArrowPosition#)]]
Padding=#DropdownIconPadding#,0,#DropdownIconPadding#,0
AntiAlias=#DropdownAntiAlias#
Hidden=(#NumberOfItems#>=[##CURRENTSECTION#]?0:1)
DynamicVariables=1
Group=Icons

[MenuFolderArrowStyle]
Hidden=(([&GetMenuInfo:IsSubmenu(#MenubarInfo.ArrowPosition#)]-1)*-1)
Y=[[##CURRENTSECTION#]:Y]
DynamicVariables=1
Hidden=0
Group=Arrows

[BackgroundStyle]
LeftMouseUpAction=[]

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*([&GetMenuInfo:Count([#FolderIndex])]>#MaxItem#?#MaxItem#:[&GetMenuInfo:Count([#FolderIndex])]+#MenubarInfo.Additional#)+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(#DropdownMenuLandingHeight#-(#DropdownMenuLandingHeight#*([&GetMenuInfo:Count([#FolderIndex])]>#MaxItem#?#HideLanding#:1)))+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=[#FlatTopShape[#HasFlatTop]]
Shape3=Combine Shape | Union Shape2
X=#SysAppMenuXOffset#
DynamicVariables=1

;----------------------------------------------------
; Item Highlight

[HighlightBackground]
Meter=Shape
Shape=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#+#SysAppMenuWOffset#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color #DropdownItemHL#,(#DropdownHLOpacity#/#HighlightShapeOpacityDivisor1B#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#+#SysAppMenuWOffset#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth 0
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
X=(1+#SysAppMenuXOffset#)
Group=Highlight | HL
DynamicVariables=1
Hidden=1

[HighlightSelected]
Meter=Shape
Shape=Rectangle [#HLSelectedShapeB[#HLSelectedShapeNum]]
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,([#DropdownMenuWidth]-(#DropdownMenuCutout#*2)+(([#DropdownMenuWidth]+[#SysAppMenuWOffset]-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,[#DropdownHighlightCorner] | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth 0
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
ShapeOption=[#HLSelectedOption[#HLSelectedShapeNum]]
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
X=1
Y=#HighlightSelectedY#
Group=HighlightSelected
DynamicVariables=1
Hidden=1

;----------------------------------------------------
; Item Names
;----------------------------------------------------

[1]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+((#DropdownItemHeight#/2)*#MenubarInfo.Additional#)+(((#DropdownItemHeight#/2)+(#DividerSpace#*2))*#NumberOfDividers#))

[2]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[3]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[4]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[5]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[6]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[7]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[8]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[9]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[10]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[11]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[12]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[13]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[14]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[15]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[16]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[17]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[18]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[19]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

[20]
Meter=String
MeterStyle=[#MenubarInfo.Style[#MenubarInfo.Type]]

;----------------------------------------------------
; Icons
;----------------------------------------------------

[1Icon]
Meter=String
MeterStyle=IconStyle
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)

[2Icon]
Meter=String
MeterStyle=IconStyle

[3Icon]
Meter=String
MeterStyle=IconStyle

[4Icon]
Meter=String
MeterStyle=IconStyle

[5Icon]
Meter=String
MeterStyle=IconStyle

[6Icon]
Meter=String
MeterStyle=IconStyle

[7Icon]
Meter=String
MeterStyle=IconStyle

[8Icon]
Meter=String
MeterStyle=IconStyle

[9Icon]
Meter=String
MeterStyle=IconStyle

[10Icon]
Meter=String
MeterStyle=IconStyle

[11Icon]
Meter=String
MeterStyle=IconStyle

[12Icon]
Meter=String
MeterStyle=IconStyle

[13Icon]
Meter=String
MeterStyle=IconStyle

[14Icon]
Meter=String
MeterStyle=IconStyle

[15Icon]
Meter=String
MeterStyle=IconStyle

[16Icon]
Meter=String
MeterStyle=IconStyle

[17Icon]
Meter=String
MeterStyle=IconStyle

[18Icon]
Meter=String
MeterStyle=IconStyle

[19Icon]
Meter=String
MeterStyle=IconStyle

[20Icon]
Meter=String
MeterStyle=IconStyle

;----------------------------------------------------
; Arrows

[1Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle
Y=[1:Y]

[2Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[3Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[4Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[5Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[6Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[7Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[8Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[9Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[10Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[11Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[12Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[13Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[14Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[15Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[16Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[17Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[18Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[19Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

[20Arrow]
Meter=Shape
MeterStyle=ArrowStyle | MenuFolderArrowStyle

;----------------------------------------------------
; Scrollbar
;----------------------------------------------------

[AnalyzeTotal]
Measure=Calc
Formula=#NumberOfItems#
IfCondition=#NumberOfItems# > #MaxItem#
IfTrueAction=[!WriteKeyValue Variables AboveTotal 1][!SetVariable AboveTotal 1][!EnableMeasureGroup Scrollbar][!ShowMeterGroup Scrollbar][!UpdateMeasure *][!UpdateMeter *][!Redraw]
DynamicVariables=1
Group=Scrollbar

[ScrollbarTop]
Meter=Image
X=3
Y=(#DropdownIconYoffset#-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#-1)
UpdateDivider=-1
Group=Scrollbar

[Size]
Measure=Calc
Formula=((#DropdownItemHeight#*#MaxItem#)-#DropdownIconYoffset#)
UpdateDivider=-1
Group=Scrollbar

[ScrollH]
Measure=Calc
Formula=Size * (#MaxItem# / (AnalyzeTotal = 0 ? 1 : AnalyzeTotal))
Group=Scrollbar
Disabled=0

[ScrollbarScript]
Measure=Script
ScriptFile=#LuaLoc#
UpdateDivider=-1
Group=Scrollbar

[CurrentPos]
Meter=Shape
Shape=Rectangle 0,0,(3*#DroptopSize#),([ScrollH]<1?1:[ScrollH]),2 | Fill Color #DropdownFontColor1#,155 | StrokeWidth 0 | StrokeColor #DropdownBGColor1#,55
X=(#DropdownMenuWidth#-(3*#DroptopSize#)-(#DropdownStrokeWidth#/2))
Y=(#DropdownIconYoffset#-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#+1)
DynamicVariables=1
Group=ScrollBar | Items
Hidden=1

;-------------------------------------------

[DownArrow]
Meter=Shape
Shape=Rectangle (-5*#DroptopSize#),(-1*#DroptopSize#),(21*#DroptopSize#),(21*#DroptopSize#),0 | Fill Color 0,0,0,0 | StrokeWidth 0
Shape2=Rectangle 0,(-1*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45 | Extend Look
Shape3=Rectangle 0,(-3*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45
Shape4=Combine Shape2 | Exclude Shape3
Look=Fill Color #DropdownFontColor1#,(#ScrollTracker#>=[&GetMenuInfo:Count([#FolderIndex])]?0:(#DropdownItemOpacity#/3))
LeftMouseDownAction=[!SetVariable ScrollTracker (#ScrollTracker#+(#ScrollTracker#+#MaxItem#>=[&GetMenuInfo:Count([#FolderIndex])]?([&GetMenuInfo:Count([#FolderIndex])]-#ScrollTracker#):#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(#MaxItem#)][!UpdateMeasure *][!UpdateMeter *][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#>=[&GetMenuInfo:Count([#FolderIndex])]?0:#DropdownItemOpacity#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#>=[&GetMenuInfo:Count([#FolderIndex])]?0:(#DropdownItemOpacity#/3))"][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=(#DropdownMenuWidth#-(25*#DroptopSize#))
Y=((([#MaxItem#:Y]+#DropdownItemHeight#)+(([Background:H]-([#MaxItem#:Y]+#DropdownItemHeight#+(21*#DroptopSize#)))/2))*([&GetMenuInfo:Count([#FolderIndex])]>#MaxItem#?1:0))
Hidden=([&GetMenuInfo:Count([#FolderIndex])]>#MaxItem#?0:1)
DynamicVariables=1

[UpArrow]
Meter=Shape
Shape=Rectangle (-5*#DroptopSize#),(-1*#DroptopSize#),(21*#DroptopSize#),(21*#DroptopSize#),0 | Fill Color 0,0,0,0 | StrokeWidth 0
Shape2=Rectangle 0,(6*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45 | Extend Look
Shape3=Rectangle 0,(8*#DroptopSize#),(11*#DroptopSize#),(11*#DroptopSize#),0 | StrokeWidth 0 | Rotate 45
Shape4=Combine Shape2 | Exclude Shape3
Look=Fill Color #DropdownFontColor1#,(#ScrollTracker#<=#MaxItem#?0:(#DropdownItemOpacity#/3))
LeftMouseDownAction=[!SetVariable ScrollTracker (#ScrollTracker#-(#ScrollTracker#-#MaxItem#<=#MaxItem#?(#ScrollTracker#-#MaxItem#):#MaxItem#))][!CommandMeasure ScrollbarScript UpdateCurrentPos(-#MaxItem#)][!UpdateMeasure *][!UpdateMeter *][!Redraw]
MouseOverAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#<=#MaxItem#?0:#DropdownItemOpacity#)"][!UpdateMeter #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# Look "Fill Color #*DropdownFontColor1*#,(#*ScrollTracker*#<=#MaxItem#?0:(#DropdownItemOpacity#/3))"][!UpdateMeter #CURRENTSECTION#][!Redraw]
X=(#DropdownMenuWidth#-(45*#DroptopSize#))
Y=r
Hidden=#HideLanding#
DynamicVariables=1