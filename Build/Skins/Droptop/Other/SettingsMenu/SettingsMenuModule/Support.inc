[Rainmeter]

[Variables]

SupportText0=#SettingsUpdateText4#
SupportText1=#SettingsSupport5#

SupportIcon0=thumbsup
SupportIcon1=cloud

SupportAction0=["https://gumroad.com/l/droptop"]#CloseSettingsMenu#
SupportAction1=#HideSettingsMenu#[!WriteKeyValue Variables UpdateCheckFrequency 2 "#@#GlobalVar\UserSettings.inc"][!DeactivateConfig "Droptop\Other\BackgroundProcesses\Tasks"][!ActivateConfig "Droptop\Other\BackgroundProcesses\Tasks" "CheckUpdate.ini"][!SetVariable NotificationText "#SettingsUpdateText1#" "Droptop\DropdownBar"][!CommandMeasure MeasureActionTimer "Execute 1" "Droptop\DropdownBar"][!UpdateMeter Notification "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]#CloseSettingsMenu#

[5]
Y=(#DividerSpace#*2)R

[5Icon]
Y=(#DividerSpace#*2)R

[6]

[7]
Y=(#DividerSpace#*2)R

[7Icon]
Y=(#DividerSpace#*2)R

[9]
Y=(#DividerSpace#*2)R

[9Icon]
Y=(#DividerSpace#*2)R

[Divider1]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*4)-(#DividerHeight#/2))

[Divider2]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*6)-(#DividerHeight#/2))

[Divider3]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*5)+(#DropdownItemHeight#*8)-(#DividerHeight#/2))