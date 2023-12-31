[Rainmeter]
MouseActionCursor=Arrow
OnFocusAction=[!SetVariable Focused 1 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure Focus "Droptop\Other\BackgroundProcesses"]
OnUnfocusAction=[!SetVariable Focused 0 "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureIsFullScreen "Droptop\Other\BackgroundProcesses"]
RightMouseDownAction=[]
SkinWidth=(#DropdownMenuWidth#+#SysAppMenuXOffset#+#SysAppMenuWOffset#+2)
MouseLeaveAction=

[Variables]
MenuBlur=#DropdownMenuBlur#

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

; ;Regular submenu mouseover actions
; ActivateSubFolder0=
; ActivateSubFolder1=[!CommandMeasure FocusPlugin "Droptop\Other\Folders\Folder[#*CurrentFolder*]"][!HideGroup Folder0][!Refresh "#NextDropdownFolder#"][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [[#*CurrentSubFolder*]:Y]][!WriteKeyValue Variables FolderNum [#*FolderNum*] "#SKINSPATH#Droptop\Other\Folders\Folder01\Folder01.ini"][!WriteKeyValue Variables SelectedFolderY [[#*CurrentSubFolder*]:Y] "#SKINSPATH#Droptop\Other\Folders\Folder01\Folder01.ini"][!WriteKeyValue Variables Folder01Loc "[mPath][mIndex[#*CurrentSubFolder*]Name]" "#SKINSPATH#Droptop\Other\Folders\Folder01\Folder01.ini"][!UpdateMeter HighlightSelected][!Redraw][!Delay 105][!ActivateConfig "Droptop\Other\Folders\Folder01"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#) ([#CURRENTCONFIGY]+[[#*CurrentSubFolder*]:Y]-[1:Y]) "Droptop\Other\Folders\Folder01"][!#Show# "Droptop\Other\Folders\Folder01"][!Update "Droptop\Other\Folders\Folder01"]

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
FolderMouseOver=[!SetVariable Focused 1 "Droptop\Other\BackgroundProcesses"][!WriteKeyValue Variables FolderNumber #CurrentSubFolder# "#CURRENTPATH#Folder\Config\FolderConfig.inc"][!SetVariable HighlightSelectedY [#CurrentSubFolder#:Y]][!Hide "#CURRENTCONFIG#\Folder"][!ActivateConfig "#CURRENTCONFIG#\Folder" "Folder#CurrentSubFolder#.ini"][!Move ([#CURRENTCONFIGX]-#DropdownSubMenuWidth#-#DropdownSubMenuXOffset#+#SysAppMenuXOffset#+1) ([#CURRENTCONFIGY]+[#CurrentSubFolder#:Y]-#DropdownTopBottomSpacing#+1) "#CURRENTCONFIG#\Folder"][!#Show# "#CURRENTCONFIG#\Folder"][!ShowMeter HighlightSelected][!UpdateMeter HighlightSelected][!Redraw]
DynamicVariables=1
IgnoreWarnings=1
Disabled=1

;----------------------------------------------------
; Styles
;----------------------------------------------------

[InfoStyle]
StringAlign=#TextDirection#Center
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
FontFace=[#FontName[#AltFont[#LanguageNum]]]
FontSize=#DropdownItemFontSize#
InlineSetting=CharacterSpacing | #DropdownCharacterSpacing#
InlineSetting2=[#DropdownTextShadow[#DropdownFontShadow][#ChamLum1]]
StringEffect=#DropdownStringEffect#
FontEffectColor=#DropdownFontEffectColor#
X=(1+(#DropdownMenuWidth#*#RTLText#)+#SysAppMenuXOffset#)
Y=R
; W=(#DropdownMenuWidth#+#SysAppMenuWOffset#-#DropdownItemPadding2#-#DropdownItemPadding1#+(#DropdownItemPadding1#*#HideIcons#))
W=(#DropdownMenuWidth#-#DropdownArrowHighlightW#-(#HideIcons#=1?#DropdownNoIconPadding#:#DropdownItemPadding1#))
H=#DropdownItemHeight#
Text="%1"
FontWeight=#FontWeight#
Padding=[#Padding[#RTLText]]
AntiAlias=#DropdownAntiAlias#
MouseOverAction=[!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,(#*HighlightFontOpacity2*#-(#*HighlightFontOpacity2*#*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]
MouseLeaveAction=[!HideMeter HighlightBackground][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#-(#*DropdownItemOpacity*#*#HideIcons#))"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]
Hidden=(#NumberOfItems#>=#CURRENTSECTION#?0:1)
DynamicVariables=1
ClipString=1
Group=Items

[FolderStyle]
LeftMouseDownAction=#ResetActiveFolders#[!SetVariable HighlightSelectedY [#CURRENTSECTION#:Y]][!Hide "#CURRENTCONFIG#\Folder"][!ActivateConfig "#CURRENTCONFIG#\Folder" "Folder#CURRENTSECTION#.ini"][!Move ([#CURRENTCONFIGX]-#DropdownSubMenuWidth#-#DropdownSubMenuXOffset#+1) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-#DropdownItemYOffset#-(#DropdownStrokeWidth#-(#DropdownStrokeWidth#%1))-1) "#CURRENTCONFIG#\Folder"][!#Show# "#CURRENTCONFIG#\Folder"][!ShowMeter HighlightSelected][!UpdateMeter HighlightSelected][!Redraw]
; MouseOverAction=[!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable ActivateSubFolder1 """[!SetVariable Focused 1 "Droptop\Other\BackgroundProcesses"][!WriteKeyValue Variables FolderNumber #CURRENTSECTION# "#CURRENTPATH#Folder\Config\FolderConfig.inc"][!SetVariable HighlightSelectedY [#CURRENTSECTION#:Y]][!Hide "#CURRENTCONFIG#\Folder"][!ActivateConfig "#CURRENTCONFIG#\Folder" "Folder#CURRENTSECTION#.ini"][!Move ([#CURRENTCONFIGX]-#DropdownSubMenuWidth#-#DropdownSubMenuXOffset#+#SysAppMenuXOffset#+1) ([#CURRENTCONFIGY]+[#CURRENTSECTION#:Y]-#DropdownTopBottomSpacing#+1) "#CURRENTCONFIG#\Folder"][!#Show# "#CURRENTCONFIG#\Folder"][!ShowMeter HighlightSelected][!UpdateMeter HighlightSelected][!Redraw]"""]   [!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION# FontEffectColor "#*DropdownFontColor2*#"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw][!Delay [#FolderMouseOverTime[#FolderMouseOverTimeNum]]][#ActivateSubFolder[#[##CURRENTSECTION#]FolderActive]]
MouseOverAction=[!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION# FontEffectColor "#*DropdownFontColor2*#"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw][!UpdateMeasure MeasureActionTimer][!CommandMeasure MeasureActionTimer "Execute 1"]
MouseLeaveAction=[!CommandMeasure MeasureActionTimer "Stop 1"][!SetVariable [##CURRENTSECTION#]FolderActive 0][!HideMeter HighlightBackground][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Icon ImageTint "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#][!UpdateMeter #CURRENTSECTION#Icon][!UpdateMeter #CURRENTSECTION#Arrow][!Redraw]
UpdateDivider=1

@IncludeArrowStyle=#SKINSPATH#Droptop\@Resources\Meters\ArrowStyle\ArrowStyle#DropdownArrowStyle#.ini

[IconStyle]
X=(#DropdownIconXoffset#+((#DropdownMenuWidth#-#DropdownIconXoffset#-#IconW#-#DropdownHLOffsetX#-(#DropdownIconPadding#*2))*#RTLText#)+#SysAppMenuXOffset#)
Y=R
W=#IconW#
H=#IconH#
ImageTint=#DropdownFontColor1#,(#DropdownItemOpacity#-(#DropdownItemOpacity#*#HideIcons#))
Greyscale=#DropdownIconGreyscale#
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
DynamicVariables=1
; Group=Items

[BackgroundStyle]
LeftMouseUpAction=[]

;----------------------------------------------------
; Background Meters
;----------------------------------------------------

[Background]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-#DropdownMenuCutout#),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=#FlatTopShape#
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
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),[#CurrentSubFolder#:Y],(#DropdownMenuWidth#+#SysAppMenuWOffset#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill Color 255,255,255,(55*#TopBarHLSolidColor#) | StrokeWidth 0
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
X=(1+#SysAppMenuXOffset#)
Group=Highlight | HL
DynamicVariables=1
Hidden=1

[HighlightSelected]
Meter=Shape
Shape=Rectangle [#HLSelectedShapeB[#HLSelectedShapeNum]]
Shape2=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,([#DropdownMenuWidth]-(#DropdownMenuCutout#*2)+(([#DropdownMenuWidth]+[#SysAppMenuWOffset]-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,[#DropdownHighlightCorner] | Fill Color #DropdownFontColor1#,(25*#ReverseDarkLight#) | StrokeWidth #DropdownHLStrokeWidth# | Stroke Color 0,0,0,#DropdownHLStrokeOpacity#
Shape3=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,(#DropdownMenuWidth#-(#DropdownMenuCutout#*2)+((#DropdownMenuWidth#-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,#DropdownHighlightCorner# | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Shape4=Rectangle (#DropdownMenuCutout#+#DropdownHLOffsetX#),0,([#DropdownMenuWidth]-(#DropdownMenuCutout#*2)+(([#DropdownMenuWidth]+[#SysAppMenuWOffset]-(#DropdownMenuCutout#*2))%1)-(#DropdownHLOffsetX#*2)),#DropdownItemHeight#,[#DropdownHighlightCorner] | Fill Color 255,255,255,(55*#TopBarHLSolidColor#) | StrokeWidth 0
ShapeOption=[#HLSelectedOptionB[#HLSelectedShapeNum]]
HLShadowGradient=90 | 255,255,255,(35*#DropdownHLShadow#) ; 1.0 | 0,0,0,(35*#DropdownHLShadow#) ; 0.0
X=(1+#SysAppMenuXOffset#)
Y=#HighlightSelectedY#
Group=HighlightSelected
DynamicVariables=1
Hidden=1

[1Icon]
Meter=Image

[2Icon]
Meter=Image

[3Icon]
Meter=Image

[4Icon]
Meter=Image

[5Icon]
Meter=Image

[6Icon]
Meter=Image

[7Icon]
Meter=Image

[8Icon]
Meter=Image

[9Icon]
Meter=Image

[10Icon]
Meter=Image

; ;----------------------

[1Arrow]
Meter=Shape
Y=[1Icon:Y]

[2Arrow]
Meter=Shape

[3Arrow]
Meter=Shape

[4Arrow]
Meter=Shape

[5Arrow]
Meter=Shape

[6Arrow]
Meter=Shape

[7Arrow]
Meter=Shape

[8Arrow]
Meter=Shape

[9Arrow]
Meter=Shape

[10Arrow]
Meter=Shape
