[Variables]

; --------------------------
; Menu options

TopBarBlur=1
TopBarGradient=0
TopBarHomeShape=0
TopBarHLSkew=0
TopBarSections=0

DropdownMenuBlur=1
DropdownArrowStyle=1

TopBarDividerW=10
TopBarDividerH=5

;---

IconStyle=2

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
BatteryMaskStyle=2
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

TopBarBGColor1=11,3,4
TopBarBGColor2=11,3,4
TopBarBGColor3=11,3,4
TopBarFontColor1=229,221,222
TopBarFontColor2=229,221,222
TopBarHLColor1=229,221,222
TopBarAssistantIconTint1=255,255,255
TopBarAssistantIconTint2=255,255,255
TopBarHomeIconColor=229,221,222
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=238,225,221

DropdownBGColor1=0,0,0
DropdownFontColor1=255,255,255
DropdownFontColor2=255,255,255
DropdownItemHL=0,125,255
DropdownIconTint=255,255,255
DropdownIconGreyscale=0
DropdownStrokeColor=0,0,0
DropdownSliderColor1=255,255,255
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=47,207,91
BatteryDyingColor=233,86,70
BatterySaverColor=255,225,95

;-------------------------
; Opacities

TopBarOpacity1=155
TopBarGradientOpacity1=76.5
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=0

DropdownMenuOpacity1=115
DropdownItemOpacity=255
DropdownStrokeOpacity=60

HighlightShapeOpacity=255
HighlightShapeOpacityDivisor1A=4.5
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=4.5
HighlightShapeOpacityDivisor2B=2
HighlightFontOpacity1=255
HighlightFontOpacity2=[#*HighlightFontOpacity1*]

TopBarHLOpacity=[#*HighlightShapeOpacity*]
DropdownHLOpacity=[#*HighlightShapeOpacity*]

TopBarHLStrokeOpacity=25
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=(92*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(43*(#TopBarOpacity1#/255))

TopBarHLShadow=0
DropdownHLShadow=0

BlurTypeNum=1

;---

TopBarShadow=0
DropdownMenuShadow=0

TopBarFontShadow=1
TopBarFontShadowBlur=2.5

DropdownFontShadow=1
DropdownFontShadowBlur=2.5

;-------------------------
; Font options

FontYposOffset=0
FontSizeOffset=0
IconSizeOffset=0
FontSpaceOffset=0
TitleSpaOffset=0

FontName0=SF Pro Rounded

FontName1=SF Pro Rounded
TopBarFontName=[#FontName[#AltFont[#LanguageNum]]]

TopBarTextShadow1000=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,185
TopBarTextShadow1001=Shadow | 0 | (1*#DroptopSize#) | [#*TopBarFontShadowBlur*] | 0,0,0,255

;---

FontWeight=500
ApplicationFontWeight=800

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

TopBarCornerMinMax0=0
TopBarCornerMinMax1=6
DropdownCornerMinMax0=0
DropdownCornerMinMax1=(8*#DPIRescaleValue#)
TopBarRoundCorners=0
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(6*#DroptopSize#)
DropdownHighlightCorner=(6*#DroptopSize#)

;-------------------------

BLANK=78
