[Variables]

; --------------------------
; Menu options

TopBarBlur=1
TopBarGradient=0
TopBarHomeShape=0
TopBarHLSkew=0
TopBarSections=0

DropdownMenuBlur=1
DropdownArrowStyle=4

TopBarDividerW=10
TopBarDividerH=5

;---

IconStyle=1

NewDesktopStyle=3
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

SetColorByWallpaperOFF=1

TopBarBGColor1=192,192,192
TopBarBGColor2=192,192,192
TopBarBGColor3=192,192,192
TopBarFontColor1=0,0,0
TopBarFontColor2=255,255,255
TopBarHLColor1=0,0,128
TopBarAssistantIconTint1=0,0,0
TopBarAssistantIconTint2=255,255,255
TopBarHomeIconColor=0,0,0
TopBarIconGreyscale=0
TopBarBorderTopColor=255,255,255
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=#DropdownFontColor1#

DropdownBGColor1=192,192,192
DropdownFontColor1=0,0,0
DropdownFontColor2=255,255,255
DropdownItemHL=0,0,128
DropdownIconTint=255,255,255
DropdownIconGreyscale=0
DropdownStrokeColor=128,128,128
DropdownSliderColor1=#DropdownItemHL#
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=47,207,91
BatteryDyingColor=233,86,70
BatterySaverColor=255,225,95

;-------------------------
; Opacities

TopBarOpacity1=255
TopBarGradientOpacity1=76.5
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=0

DropdownMenuOpacity1=255
DropdownItemOpacity=255
DropdownStrokeOpacity=255

HighlightShapeOpacity=255
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=3
HighlightShapeOpacityDivisor2B=3
HighlightFontOpacity1=255
HighlightFontOpacity2=[#*HighlightFontOpacity1*]

TopBarHLOpacity=[#*HighlightShapeOpacity*]
DropdownHLOpacity=[#*HighlightShapeOpacity*]

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=(95*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(95*(#TopBarOpacity1#/255))

TopBarHLShadow=0
DropdownHLShadow=0

BlurTypeNum=0

;---

TopBarShadow=1
DropdownMenuShadow=1

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

FontName0=Microsoft Sans Serif

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

TopBarAntiAlias=0
DropdownAntiAlias=#TopBarAntiAlias#

;-------------------------
; Shapes & backgrounds

TopBarCornerMinMax0=0
TopBarCornerMinMax1=6
DropdownCornerMinMax0=0
DropdownCornerMinMax1=(8*#DPIRescaleValue#)
TopBarRoundCorners=0
DropdownRoundCorners=0
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(#TopBarCorner#*0.83)
DropdownHighlightCorner=(#DropdownBGCorner#*0.83)

;-------------------------

BLANK=255,0,128
