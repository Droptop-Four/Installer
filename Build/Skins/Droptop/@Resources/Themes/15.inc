[Variables]

AltFont1=0
AltFont2=0
AltFont3=0
AltFont4=0
AltFont5=0
AltFont6=0
AltFont7=0
AltFont8=0
AltFont9=0
AltFont10=0
AltFont11=0
AltFont12=0
AltFont13=0
AltFont14=0
AltFont15=0
AltFont16=0
AltFont17=0
AltFont18=0
AltFont19=0
AltFont20=0
AltFont21=0
AltFont22=0
AltFont23=0
AltFont24=0
AltFont25=0

;-------------------------

TopBarFontSize=((8.5*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
TopBarContentXOffset=((14*#DroptopSize#)-((14*#DroptopSize#)%1))
TopBarTitlePadding="((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),((-1*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1)),((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0"
TopBarTextYOffset=((0*#DroptopSize#)+([#*FontYposOffset*]*#DroptopSize#))
TopBarSysIconTextOffset=((28*#DroptopSize#)+([#*IconSizeOffset*]*#DroptopSize#))
TopBarSysBatteryIconOffset=(3*#DroptopSize#)
TopBarSysBatteryTextOffset=(8*#DroptopSize#)
TopBarSysTextYPadding=((-1*#DroptopSize#)*(([#AltFont[#LanguageNum]]-1)*-1))
TopBarSysTextWPadding=(5*#DroptopSize#)
TopBarSysAppWPadding=(0*#DroptopSize#)
TopBarStrokeWidth=1
TopBarHLStrokeWidth=0.25
TopBarRoundTop=0
TopBarHLRoundTop=1
TopBarBorderTopH=0
TopBarBorderBottomH=0
TopBarHLOffsetY=(0*#DroptopSize#)
TopBarHLOffsetH=(3*#DroptopSize#)
TopBarSkew=(-20*[#*TopBarHLSkew*])
TopBarIconHOffset=((-12*#DroptopSize#)+([#*IconSizeOffset*]*#DroptopSize#))
TopBarSectionSpacingX=(((14*#DroptopSize#)-((14*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionSpacingY=((3*#DroptopSize#)*#TopBarSections#)
TopBarSectionPadding=(((5*#DroptopSize#)-((5*#DroptopSize#)%1))*#TopBarSections#)
TopBarCutout=(0*#DroptopSize#)
TopBarGradientCutout=#TopBarCutout#

;-------------------------

DropdownMenuWidth=((275*#DroptopSize#)-((275*#DroptopSize#)%1))
DropdownItemHeight=((30*#DroptopSize#)-((30*#DroptopSize#)%1))
DropdownItemFontSize=((8.5*#DroptopSize#)+([#*FontSizeOffset*]*#DroptopSize#))
DropdownMenuYOffset=(4*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownItemHeight#-#IconH#)/2)
DropdownIconXoffset=(9*#DroptopSize#)
DropdownIconYoffset=((4*#DroptopSize#)-((4*#DroptopSize#)%1))
DropdownItemYOffset=((2*#DroptopSize#)-((2*#DroptopSize#)%1))
DropdownItemPadding1=(38*#DroptopSize#)
DropdownItemPaddingY=((-1+#FontYposOffset#)*#DroptopSize#)
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
DropdownSubMenuWidth=((185*#DroptopSize#)-((185*#DroptopSize#)%10))
DropdownContextMenuYOffset=(3*#DroptopSize#)
DropdownStrokeWidth=0.5
DropdownHLStrokeWidth=0.25
DropdownArrowHighlightW=((22*#DroptopSize#)-((22*#DroptopSize#)%1))
DropdownArrowXOffset=(0*#DroptopSize#)+(#DropdownMenuCutout#%1)
DropdownArrowXOffsetTray=(4*#DroptopSize#)
DropdownArrowXOffsetRTL=(0*#DroptopSize#)
DropdownMenuFlatTop=0
DropdownSubMenuXOffset=(3*#DroptopSize#)
DropdownMenuCutout=1
DropdownHLOffsetX=((4*#DroptopSize#)-((4*#DroptopSize#)%1))
DropdownMenuLandingHeight=(20*#DroptopSize#)
DropdownNoIconPadding=((6*#DroptopSize#)+#DropdownHLOffsetX#+#DropdownMenuCutout#)

;-------------------------
; Colors

ChamLum1=0
ChamLum2=0
ChamLumA=21,21,21
ChamLumB=255,255,255

ChamBG1=95,56,173
ChamBG2=50,141,152
ChamBG3=74,99,163
ChamFG1=123,255,255
ChamFG2=150,255,255

TopBarSolidColor=0

TopBarHLSolidColor=1
DropdownHLSolidColor=1

DropdownStringEffect=None
DropdownFontEffectColor=0,0,0

LockSetColorByWallpaperOFF=0
LockColorReset=0

RefreshOnColorReset=0

LockReverseDarkLightTopBar=0
LockReverseDarkLightDropdownMenu=0
LockTopBarShadowNum=0



;---
; ColorMode/Charging/BatteryLow/BatterySaver
BatteryFillColor0000=[#*TopBarFontColor1*]
BatteryFillColor0010=[#*TopBarFontColor1*]
BatteryFillColor0100=[#*TopBarFontColor1*]
BatteryFillColor0110=[#*TopBarFontColor1*]

BatteryFillColor1000=[#*TopBarFontColor1*]
BatteryFillColor1010=[#*BatteryDyingColor*]
BatteryFillColor1100=[#*BatteryChargingColor*]
BatteryFillColor1110=[#*BatteryDyingColor*]

BatteryFillColor0001=[#*TopBarFontColor1*]
BatteryFillColor0011=[#*TopBarFontColor1*]
BatteryFillColor0101=[#*TopBarFontColor1*]
BatteryFillColor0111=[#*TopBarFontColor1*]

BatteryFillColor1001=[#*BatterySaverColor*]
BatteryFillColor1011=[#*BatterySaverColor*]
BatteryFillColor1101=[#*BatteryChargingColor*]
BatteryFillColor1111=[#*BatteryChargingColor*]

;---

BatteryFillColor0000B=[#*TopBarFontColor2*]
BatteryFillColor0010B=[#*TopBarFontColor2*]
BatteryFillColor0100B=[#*TopBarFontColor2*]
BatteryFillColor0110B=[#*TopBarFontColor2*]

BatteryFillColor1000B=[#*TopBarFontColor2*]
BatteryFillColor1010B=[#*BatteryDyingColor*]
BatteryFillColor1100B=[#*BatteryChargingColor*]
BatteryFillColor1110B=[#*BatteryDyingColor*]

BatteryFillColor0001B=[#*TopBarFontColor2*]
BatteryFillColor0011B=[#*TopBarFontColor2*]
BatteryFillColor0101B=[#*TopBarFontColor2*]
BatteryFillColor0111B=[#*TopBarFontColor2*]

BatteryFillColor1001B=[#*BatterySaverColor*]
BatteryFillColor1011B=[#*BatterySaverColor*]
BatteryFillColor1101B=[#*BatteryChargingColor*]
BatteryFillColor1111B=[#*BatteryChargingColor*]

;-------------------------
; Opacities

BatteryFillOpacity=355

;-------------------------
; Shapes & backgrounds

DividerX=(#DropdownStrokeWidth#+1)
DividerSpace=(#DropdownIconYoffset#+#DropdownItemYOffset#)
DividerHeight=(1*#DroptopSize#)

DividerShape=Rectangle (#DividerX#+1),0,(#DropdownMenuWidth#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color #DropdownFontColor1#,40 | StrokeWidth 0

HomeShape=Rectangle [#*TopBarContentXOffset*],([#*TopBarHLOffsetH*]+[#*TopBarHLOffsetY*]),[Home:W],([#*TopHeight*]-([#*TopBarCutout*]*2)-([#*TopBarHLOffsetH*]*2)),[#*TopBarHighlightCorner*] | StrokeWidth 0 | Stroke Color [#*TopBarBGColor1*] | Skew [#*TopBarSkew*],0 | Extend HomeFillColor[#*TopBarHomeShape*]

TopBarBlurType=[#BlurType[#BlurTypeNum][#TopBarSections]]

CurrentDayStrokeWidth=(1*#DroptopSize#)

TopBarHotCornerStrokeWidth=#TopBarStrokeWidth#

HLSelectedShapeNum=1

;-------------------------
; Chameleon settings - Default settings applied when wallpaper changes or when "Reset" button is pressed in Color & Opacity Settings

ChamTopBarBGColor1=[&TopBarBGColor.R.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting1[#ReverseDarkLight]]]
ChamTopBarBGColor2=[&TopBarBGColor.R.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting1[#ReverseDarkLight]]]
ChamTopBarBGColor3=[&TopBarBGColor.R.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting1[#ReverseDarkLight]]]
ChamDropdownBGColor1=[&TopBarBGColor.R.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting1[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting1[#ReverseDarkLight]]]
ChamFolderHL=[ChamBG1]
ChamTopBarHL=[ChamBG1]
ChamDropdownFontColor1=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamDropdownFontColor2=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamTopBarFontColor1=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamTopBarFontColor2=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamDropdownStrokeColor=0,0,0
ChamTopBarStrokeColor=0,0,0
ChamTopBarHomeIconColor=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamTopBarAssistantIconTint1=255,255,255
ChamTopBarAssistantIconTint2=255,255,255
ChamBatteryFillColor=[&TopBarBGColor.R.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.G.Calc[#DarkLightSetting0[#ReverseDarkLight]]],[&TopBarBGColor.B.Calc[#DarkLightSetting0[#ReverseDarkLight]]]
ChamLightOffset=255
ChamDarkOffset=21
ChamLumThreshold=0.5
ChamColorModFactor=0.90
ChamColorModFactorB=0.30

;-------------------------

