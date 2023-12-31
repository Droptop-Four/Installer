[Rainmeter]
OnCloseAction=[!EnableMeasure MeasureSetChanges "Droptop\Other\BackgroundProcesses"][!UpdateMeasure MeasureSetChanges "Droptop\Other\BackgroundProcesses"]

[Variables]

AddDesktop0=["#@#Scripts\DroptopAHK.#AHKType#" "NewDesktop"]
AddDesktop1=[!SetOptionGroup DesktopButtons ImageAlpha "((#*TopBarTitleOpacity*#/3)*((#*HideAppNewDesktop*#-1)*-1))" "Droptop\DropdownBar"][!SetOptionGroup DesktopButtons ImageTint "#*TopBarFontColor1*#" "Droptop\DropdownBar"][!CommandMeasure VirtualDesktop "New-Desktop" "Droptop\Other\BackgroundProcesses"][!UpdateMeasureGroup Workspace "Droptop\Other\BackgroundProcesses"][!UpdateMeasureGroup Workspace "Droptop\Other\BackgroundProcesses"][!UpdateMeter [#*CURRENTSECTION*]][!UpdateMeterGroup DesktopButtons "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Redraw]

RemoveDesktop0=["#@#Scripts\DroptopAHK.#AHKType#" "CloseDesktop"]
RemoveDesktop1=[!HideMeter Workspace[#*PreviousDesktopTotal*] "Droptop\DropdownBar"][!SetOptionGroup DesktopButtons ImageAlpha "((#*TopBarTitleOpacity*#/3)*((#*HideAppNewDesktop*#-1)*-1))" "Droptop\DropdownBar"][!SetOptionGroup DesktopButtons ImageTint "#*TopBarFontColor1*#" "Droptop\DropdownBar"][!CommandMeasure VirtualDesktop "Remove-Desktop" "Droptop\Other\BackgroundProcesses"][!UpdateMeasureGroup Workspace "Droptop\Other\BackgroundProcesses"][!UpdateMeasureGroup Workspace "Droptop\Other\BackgroundProcesses"][!UpdateMeter *][!UpdateMeterGroup DesktopButtons "Droptop\DropdownBar"][[!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeter * "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!Redraw]

[Divider1]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*2)-(#DividerHeight#/2))

[3]
Y=(#DividerSpace#*2)R

[3Icon]
Y=(#DividerSpace#*2)R

[Divider2]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*4)-(#DividerHeight#/2))

[4]

[4Icon]

[Divider3]

[5]
Y=(#DividerSpace#*2)R

[5Icon]
Y=(#DividerSpace#*2)R