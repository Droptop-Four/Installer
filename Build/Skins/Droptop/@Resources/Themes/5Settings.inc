[Variables]

; --------------------------
; Menu options

TopBarBlur=0
TopBarGradient=1
TopBarHomeShape=0
TopBarHLSkew=0
TopBarSections=1

DropdownMenuBlur=0
DropdownArrowStyle=1

TopBarDividerW=10
TopBarDividerH=5

;---

IconStyle=1

NewDesktopStyle=1
ActionStyle=[#*IconStyle*]
SearchStyle=[#*IconStyle*]
TimeStyle=[#*IconStyle*]
MailStyle=[#*IconStyle*]
AlarmStyle=[#*IconStyle*]
VolumeStyle=[#*IconStyle*]
WeatherStyle=[#*IconStyle*]
WifiStyle=[#*IconStyle*]
BatteryStyle=[#*IconStyle*]
BatteryMaskStyle=[#*IconStyle*]
DownloadsStyle=[#*IconStyle*]
RecentStyle=[#*IconStyle*]
NotesStyle=[#*IconStyle*]
CopyStyle=[#*IconStyle*]
MONDStyle=[#*IconStyle*]
LanguageStyle=[#*IconStyle*]
AppDrawerStyle=[#*IconStyle*]
AssistantStyle=[#*IconStyle*]

DropdownSliderStyle=1

;-------------------------
; Colors

SetColorByWallpaperOFF=0

TopBarBGColor1=216,179,251
TopBarBGColor2=216,179,251
TopBarBGColor3=216,179,251
TopBarFontColor1=79,43,115
TopBarFontColor2=216,179,251
TopBarHLColor1=79,43,115
TopBarAssistantIconTint1=79,43,115
TopBarAssistantIconTint2=216,179,251
TopBarHomeIconColor=79,43,115
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=#DropdownFontColor1#

DropdownBGColor1=216,179,251
DropdownFontColor1=79,43,115
DropdownFontColor2=216,179,251
DropdownItemHL=79,43,115
DropdownIconTint=255,255,255
DropdownIconGreyscale=0
DropdownStrokeColor=#DropdownFontColor1#
DropdownSliderColor1=#DropdownItemHL#
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=47,207,91
BatteryDyingColor=233,86,70
BatterySaverColor=255,225,95

;-------------------------
; Opacities

TopBarOpacity1=255
TopBarGradientOpacity1=115
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=55

DropdownMenuOpacity1=255
DropdownItemOpacity=255
DropdownStrokeOpacity=55

HighlightShapeOpacity=255
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=3
HighlightShapeOpacityDivisor2B=3
HighlightFontOpacity1=255
HighlightFontOpacity2=[#*HighlightFontOpacity1*]

TopBarHLOpacity=255
DropdownHLOpacity=[#*HighlightShapeOpacity*]

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=(55*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(26*(#TopBarOpacity1#/255))

TopBarHLShadow=1
DropdownHLShadow=1

BlurTypeNum=1

;---

TopBarShadow=0
DropdownMenuShadow=0

TopBarFontShadow=0
TopBarFontShadowBlur=2.5

DropdownFontShadow=0
DropdownFontShadowBlur=2.5

;-------------------------
; Font options

FontYposOffset=0
FontSizeOffset=0
IconSizeOffset=0
FontSpaceOffset=0
TitleSpaOffset=0

FontName0=FF DIN Round Pro

FontName1=#UniversalFont#
TopBarFontName=[#FontName[#AltFont[#LanguageNum]]]

TopBarTextShadow1000=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,185
TopBarTextShadow1001=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,255

;---

FontWeight=400
ApplicationFontWeight=600

TopBarTitleCaseNum=0
DegreeSymbol=°
PercentSymbol=%
MusicSymbol=#NotificationPlaying#
MailSymbol=#NotificationMail#

TopBarCharacterSpacing=[#*FontSpaceOffset*] | [#*FontSpaceOffset*]
DropdownCharacterSpacing=[#*FontSpaceOffset*] | [#*FontSpaceOffset*]

TopBarAntiAlias=1
DropdownAntiAlias=#TopBarAntiAlias#

;-------------------------
; Shapes & backgrounds

TopBarCornerMinMax0=1
TopBarCornerMinMax1=4
DropdownCornerMinMax0=1
DropdownCornerMinMax1=(8*#DPIRescaleValue#)
TopBarRoundCorners=1
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(#TopBarCorner#*0.83)
DropdownHighlightCorner=(#DropdownBGCorner#*0.83)

;-------------------------

BLANK=255,255,255
