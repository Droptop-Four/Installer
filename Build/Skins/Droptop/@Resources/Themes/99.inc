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

TopBarFontSize=((8*#DroptopSize#)+(#FontSizeOffset#*#DroptopSize#))
TopBarContentXOffset=((12*#DroptopSize#)-((12*#DroptopSize#)%1))
TopBarTitlePadding=((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),(0*#DroptopSize#),((6*#DroptopSize#)+(#TitleSpaOffset#*#DroptopSize#)),0
TopBarTextYOffset=((1*#DroptopSize#)+(#FontYposOffset#*#DroptopSize#))
TopBarSysIconTextOffset=((30*#DroptopSize#)+(#IconSizeOffset#*#DroptopSize#))
TopBarSysBatteryIconOffset=(3*#DroptopSize#)
TopBarSysBatteryTextOffset=(9*#DroptopSize#)
TopBarSysTextYPadding=(0*#DroptopSize#)
TopBarSysTextWPadding=(3*#DroptopSize#)
TopBarSysAppWPadding=(0*#DroptopSize#)
TopBarHLStrokeWidth=0
TopBarRoundTop=1
TopBarHLRoundTop=1
TopBarBorderTopH=(0*#DroptopSize#)
TopBarBorderBottomH=0
TopBarHLOffsetY=(16*#DroptopSize#)
TopBarHLOffsetH=(15*#DroptopSize#)
TopBarSkew=(-20*#TopBarHLSkew#)
TopBarIconHOffset=((-23*#DroptopSize#)+(#IconSizeOffset#*#DroptopSize#))
TopBarSectionSpacingX=(((18*#DroptopSize#)-((18*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionSpacingY=(((3*#DroptopSize#)-((3*#DroptopSize#)%1))*#TopBarSections#)
TopBarSectionPadding=(((6*#DroptopSize#)-((6*#DroptopSize#)%1))*#TopBarSections#)
TopBarCutout=(5*#DroptopSize#)
TopBarGradientCutout=#TopBarCutout#
TopBarStrokeWidth=(1*#DroptopSize#)

;-------------------------

DropdownMenuWidth=((330*#DroptopSize#)-((330*#DroptopSize#)%1))
DropdownItemHeight=((28*#DroptopSize#)-((28*#DroptopSize#)%1))
DropdownItemFontSize=((8*#DroptopSize#)+(#FontSizeOffset#*#DroptopSize#))
DropdownMenuYOffset=(0*#DroptopSize#)
DropdownMenuShapeOffsetH=(0*#DroptopSize#)
DropdownIconPadding=((#DropdownItemHeight#-#IconH#)/2)
DropdownIconXoffset=(12*#DroptopSize#)
DropdownIconYoffset=((1*#DroptopSize#)-((1*#DroptopSize#)%1))
DropdownItemYOffset=((6*#DroptopSize#)-((6*#DroptopSize#)%1))
DropdownItemPadding1=(42*#DroptopSize#)
DropdownItemPadding2=(20*#DroptopSize#)
DropdownItemPaddingY=((1+#FontYposOffset#)*#DroptopSize#)
DropdownTopBottomSpacing=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)
DropdownSubMenuWidth=(240*#DroptopSize#)
DropdownContextMenuYOffset=(0*#DroptopSize#)
DropdownStrokeWidth=(1.5*#DroptopSize#)
DropdownHLStrokeWidth=0
DropdownSysAppContentXOffset=(0*#DroptopSize#)
DropdownArrowHighlightW=((30*#DroptopSize#)-((30*#DroptopSize#)%1))
DropdownArrowXOffset=((-3*#DroptopSize#)+(#DropdownMenuCutout#%1))
DropdownArrowXOffsetTray=((-3*#DroptopSize#)+(#DropdownMenuCutout#%1))
DropdownArrowXOffsetRTL=(0*#DroptopSize#)
DropdownMenuFlatTop=0
DropdownSubMenuXOffset=(5*#DroptopSize#)
DropdownMenuCutout=(1*#DroptopSize#)
DropdownHLOffsetX=((5*#DroptopSize#)-((5*#DroptopSize#)%1))
DropdownMenuLandingHeight=(20*#DroptopSize#)
DropdownNoIconPadding=((6*#DroptopSize#)+#DropdownHLOffsetX#+#DropdownMenuCutout#)

;-------------------------
; Colors

ChamLum1=1
ChamLum2=1
ChamLumA=255,255,255
ChamLumB=0,0,0

ChamBG1=59,175,209
ChamBG2=153,167,181
ChamBG3=57,171,206
ChamFG1=35,42,50
ChamFG2=35,46,58

TopBarSolidColor=0

TopBarHLSolidColor=0
DropdownHLSolidColor=0

DropdownStringEffect=None
DropdownFontEffectColor=0,0,0

LockSetColorByWallpaperOFF=1
LockColorReset=0

RefreshOnColorReset=0

LockReverseDarkLightTopBar=1
LockReverseDarkLightDropdownMenu=1
LockTopBarShadowNum=1

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

DividerX=(10*#DroptopSize#)
DividerSpace=(#DropdownIconYoffset#+#DropdownItemYOffset#)
DividerHeight=(2*#DroptopSize#)

DividerShape=Rectangle (#DividerX#+1),0,(#DropdownMenuWidth#-(#DividerX#*2)),#DividerHeight#,(0*#DroptopSize#) | Fill Color #DropdownFontColor1#,40 | StrokeWidth 0

HomeShape=Rectangle [#*TopBarContentXOffset*],([#*TopBarHLOffsetH*]+[#*TopBarHLOffsetY*]),[Home:W],([#*TopHeight*]-([#*TopBarCutout*]*2)-([#*TopBarHLOffsetH*]*2)),[#*TopBarHighlightCorner*] | StrokeWidth 0 | Stroke Color [#*TopBarBGColor1*] | Skew [#*TopBarSkew*],0 | Extend HomeFillColor[#*TopBarHomeShape*]

TopBarBlurType=[#BlurType[#BlurTypeNum]]

CurrentDayStrokeWidth=(2*#DroptopSize#)

TopBarHotCornerStrokeWidth=0

HLSelectedShapeNum=1

;-------------------------
; Chameleon settings

ChamTopBarBGColor1=23,23,28
ChamTopBarBGColor2=23,23,28
ChamTopBarBGColor3=23,23,28
ChamDropdownBGColor1=23,23,28
ChamFolderHL=255,248,255
ChamTopBarHL=255,248,255
ChamDropdownFontColor1=224,223,230
ChamDropdownFontColor2=224,223,230
ChamTopBarFontColor1=224,223,230
ChamTopBarFontColor2=224,223,230
ChamDropdownStrokeColor=255,90,90,255
ChamTopBarStrokeColor=255,90,90
ChamTopBarHomeIconColor=224,223,230
ChamTopBarAssistantIconTint1=224,223,230
ChamTopBarAssistantIconTint2=224,223,230
ChamBatteryFillColor=#ChamTopBarFontColor1#
ChamLightOffset=255
ChamDarkOffset=0
ChamLumThreshold=0.5
ChamColorModFactor=0.835
ChamColorModFactorB=0.90

;-------------------------
