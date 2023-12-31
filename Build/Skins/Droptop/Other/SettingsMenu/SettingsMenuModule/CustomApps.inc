[Rainmeter]

[Variables]
16=1
32=2

MeasureAppName1=1
MeasureAppName2=2
MeasureAppName3=3
MeasureAppName4=4
MeasureAppName5=5

;----------------------------------------------------

[MeasureAppName1]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName2]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName3]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName4]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName5]
Measure=String
String=[#CustomAppID[##CURRENTSECTION#]]
Substitute="_":" ","-":" - "
DynamicVariables=1

;----------------------------------------------------

[CustomAppIconStyle]
ImageCrop=-16,-16,32,32,5
ImageAlpha=([#HideAppCustomApp[##CURRENTSECTION#]]=1?(#DropdownItemOpacity#/3):#DropdownItemOpacity#)
ImageName=#SKINSPATH#Droptop Community Apps\Apps\[#CustomAppID[##CURRENTSECTION#]]\Button\Medium\Button.png
Padding=#DropdownIconPadding#,#DropdownIconPadding#,#DropdownIconPadding#,(#DropdownIconPadding#+(#DropdownIconPadding#%1))
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*([##CURRENTSECTION#]-1)))
W=#IconW#
H=#IconH#

[1Icon]
MeterStyle=IconStyle | CustomAppIconStyle
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1)

[2Icon]
MeterStyle=IconStyle | CustomAppIconStyle

[3Icon]
MeterStyle=IconStyle | CustomAppIconStyle

[4Icon]
MeterStyle=IconStyle | CustomAppIconStyle

[5Icon]
MeterStyle=IconStyle | CustomAppIconStyle

[Divider1]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*5)-(#DividerHeight#/2))

[6]
Y=(#DividerSpace#*2)R

[6Icon]
Y=(#DividerSpace#*2)R

[Divider2]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*6)-(#DividerHeight#/2))

[7]
Y=(#DividerSpace#*2)R

[7Icon]
Y=(#DividerSpace#*2)R

[7Arrow]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*6)+(#DividerSpace#*4))
Hidden=0
DynamicVariables=1

[8]

[8Arrow]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*7)+(#DividerSpace#*4))
Hidden=0
DynamicVariables=1

[FolderBlockB]
Meter=Image
X=1
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DropdownItemHeight#*6)+(#DividerSpace#*4))
W=#DropdownMenuWidth#
H=(#DropdownItemHeight#*2)
; LeftMouseDownAction=[!SetTransparencyGroup 0 SM3][!Refresh "Droptop\Other\SettingsMenu\SettingsMenu3"][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY (#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*7)+(#DividerSpace#*4))][!WriteKeyValue Variables SettingsMenuNumber "1.7.[#CurrentSubFolder]" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuIndex3 1 "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex 1 "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsDirectory#SettingsMenuBlock# "SettingsMenu#SettingsMenuBlock#.#SettingsMenuNumber#.#CurrentFolder#" "#@#GlobalVar\Control.inc"][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu3"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#-(((#DropdownMenuWidth#+#DropdownSubMenuXOffset#)*2)*#SettingsSubMenuOpenLeft#)) ([#CURRENTCONFIGY]+(#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*6)+(#DividerSpace#*4))-[1:Y]) "Droptop\Other\SettingsMenu\SettingsMenu3"][!#Show# "Droptop\Other\SettingsMenu\SettingsMenu3"][!UpdateMeter HighlightSelected][!Redraw]
LeftMouseDownAction=[!SetTransparencyGroup 0 SM3][!Refresh "Droptop\Other\SettingsMenu\SettingsMenu3"][!ShowMeter HighlightSelected][!SetVariable HighlightSelectedY [[#CurrentSubFolder]:Y]][!WriteKeyValue Variables SettingsMenuNumber "1.7.[#CurrentSubFolder]" "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuIndex3 1 "#@#GlobalVar\SettingsMenuOptions.inc"][!WriteKeyValue Variables SettingsMenuIndex 1 "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsMenuYpos (#SettingsMenuYpos#+[#CurrentFolder#:Y]-(#DropdownIconYoffset#+#DropdownItemYOffset#)) "#SKINSPATH#Droptop\Other\SettingsMenu\SettingsMenu3\SettingsMenu3.ini"][!WriteKeyValue Variables SettingsDirectory#SettingsMenuBlock# "SettingsMenu#SettingsMenuBlock#.#SettingsMenuNumber#.#CurrentFolder#" "#@#GlobalVar\Control.inc"][!ActivateConfig "Droptop\Other\SettingsMenu\SettingsMenu3"][!Move ([#CURRENTCONFIGX]+#DropdownMenuWidth#+#DropdownSubMenuXOffset#-(((#DropdownMenuWidth#+#DropdownSubMenuXOffset#)*2)*#SettingsSubMenuOpenLeft#)) ([#CURRENTCONFIGY]+(#DropdownIconYoffset#+#DropdownItemYOffset#+1+(#DropdownItemHeight#*6)+(#DividerSpace#*4))-[1:Y]) "Droptop\Other\SettingsMenu\SettingsMenu3"][!#Show# "Droptop\Other\SettingsMenu\SettingsMenu3"][!UpdateMeter HighlightSelected][!Redraw]
MouseOverAction=[!SetVariable FolderMode 1][!Delay [#FolderMouseOverTime[#FolderMouseOverTimeNum]]][#ActivateSubFolder[#[##CURRENTSECTION#]FolderActive][#FolderMode]]
MouseLeaveAction=[!SetVariable FolderMode 0]
DynamicVariables=1
Group=Items
