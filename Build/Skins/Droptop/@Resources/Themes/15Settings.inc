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
BatteryMaskStyle=2
DownloadsStyle=[#*IconStyle*]
RecentStyle=[#*IconStyle*]
NotesStyle=[#*IconStyle*]
CopyStyle=[#*IconStyle*]
MONDStyle=[#*IconStyle*]
LanguageStyle=[#*IconStyle*]
AppDrawerStyle=[#*IconStyle*]
AssistantStyle=[#*IconStyle*]

DropdownSliderStyle=2

;-------------------------
; Colors

SetColorByWallpaperOFF=0

TopBarBGColor1=3,5,4
TopBarBGColor2=3,5,4
TopBarBGColor3=3,5,4
TopBarFontColor1=233,234,234
TopBarFontColor2=233,234,234
TopBarHLColor1=38,51,45
TopBarAssistantIconTint1=233,234,234
TopBarAssistantIconTint2=233,234,234
TopBarHomeIconColor=233,234,234
TopBarIconGreyscale=0
TopBarBorderTopColor=25,25,25
TopBarBorderBottomColor=0,0,0
TopBarStrokeColor=#DropdownFontColor1#

DropdownBGColor1=3,5,4
DropdownFontColor1=233,234,234
DropdownFontColor2=233,234,234
DropdownItemHL=38,51,45
DropdownIconTint=255,255,255
DropdownIconGreyscale=0
DropdownStrokeColor=0,0,0
DropdownSliderColor1=#DropdownItemHL#
DropdownSliderColor2=#DropdownSliderColor1#
DropdownSliderColor3=#DropdownSliderColor1#

BatteryChargingColor=47,207,91
BatteryDyingColor=233,86,70
BatterySaverColor=255,225,95

;-------------------------
; Opacities

TopBarOpacity1=150
TopBarGradientOpacity1=76.5
TopBarGradientOpacity2=35
TopBarTitleOpacity=255
TopBarStrokeOpacity=0

DropdownMenuOpacity1=150
DropdownItemOpacity=255
DropdownStrokeOpacity=55

HighlightShapeOpacity=255
HighlightShapeOpacityDivisor1A=1
HighlightShapeOpacityDivisor1B=1
HighlightShapeOpacityDivisor2A=1
HighlightShapeOpacityDivisor2B=2
HighlightFontOpacity1=255
HighlightFontOpacity2=[#*HighlightFontOpacity1*]

TopBarHLOpacity=145
DropdownHLOpacity=145

TopBarHLStrokeOpacity=55
DropdownHLStrokeOpacity=55

TopBarBorderTopOpacity=(92*(#TopBarOpacity1#/255))
TopBarBorderBottomOpacity=(43*(#TopBarOpacity1#/255))

TopBarHLShadow=0
DropdownHLShadow=0

BlurTypeNum=1

;---

TopBarShadow=1
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

FontName0=Segoe UI Variable Small Light

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

TopBarCornerMinMax0=0
TopBarCornerMinMax1=5
DropdownCornerMinMax0=0
DropdownCornerMinMax1=(8*#DPIRescaleValue#)
TopBarRoundCorners=0
DropdownRoundCorners=1
TopBarCorner=([#TopBarCornerMinMax[#TopBarRoundCorners]]*#DroptopSize#)
TopGradientCorner=#TopBarCorner#
DropdownBGCorner=[#DropdownCornerMinMax[#DropdownRoundCorners]]
TopBarHighlightCorner=(#TopBarCornerMinMax1#*#DroptopSize#)
DropdownHighlightCorner=(#DropdownBGCorner#*0.83)

;-------------------------

BLANK=145
