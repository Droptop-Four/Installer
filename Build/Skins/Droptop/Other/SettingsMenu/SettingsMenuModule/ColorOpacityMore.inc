[Rainmeter]

[Variables]

; SetChangesAction=

; [CheckSetColorByWallpaperOFF]
; Measure=Calc
; IfCondition=#LockSetColorByWallpaperOFF#=1
; IfTrueAction=[!SetOption 1 FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/3)"][!SetOption 1Icon ImageAlpha (#*DropdownItemOpacity*#/3)][!SetOption 1Icon ImageName "#@#Icons\Fixed\#IconSize#\x.png"][!DisableMouseAction 1 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!UpdateMeter *][!Redraw]
; IfCondition2=#SetColorByWallpaperOFF#=0
; IfTrueAction2=[!EnableMouseActionGroup * ReverseOption][!DisableMouseActionGroup * ColorOption][!HideMeter HighlightSelected][!SetOptionGroup ColorOption FontColor "[#*DropdownFontColor1*],([#*DropdownItemOpacity*]/3)"][!SetOption ColorOption FontColor "[#*DropdownFontColor1*],([#*DropdownItemOpacity*]/3)"][!SetOptionGroup ReverseOption FontColor "[#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!SetOptionGroup F7 FillColor "Fill Color [#*DropdownFontColor1*],([#*DropdownItemOpacity*]/3)"][!UpdateMeterGroup ColorOption][!Redraw]
; IfFalseAction2=[!DisableMouseActionGroup * ReverseOption][!EnableMouseActionGroup * ColorOption][!EnableMouseAction FolderBlock *][!SetOptionGroup ColorOption FontColor "[#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!SetOptionGroup ReverseOption FontColor "[#*DropdownFontColor1*],([#*DropdownItemOpacity*]/3)"][!SetOptionGroup F7 FillColor "Fill Color [#*DropdownFontColor1*],[#*DropdownItemOpacity*]"][!UpdateMeterGroup ColorOption][!Redraw]
; IfCondition3=#LockColorReset#=1
; IfTrueAction3=[!SetOption 8 FontColor "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/3)"][!SetOption 8Icon ImageAlpha (#*DropdownItemOpacity*#/3)][!SetOption 8Icon ImageName "#@#Icons\Fixed\#IconSize#\x.png"][!DisableMouseAction 8 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!UpdateMeter *][!Redraw]
; UpdateDivider=-1
; IfConditionMode=1
; DynamicVariables=1

[InfoStyleB]
FontColor=#DropdownFontColor1#,#DropdownItemOpacity#
MouseOverAction=[!SetVariable [##CURRENTSECTION#]FolderActive 1][!SetVariable CurrentSubFolder #CURRENTSECTION#][!SetVariable CurrentFolder #CURRENTSECTION#][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor2*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor2*#,#*HighlightFontOpacity2*#"][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!UpdateMeter FolderBlock][!Redraw][!Delay [#FolderMouseOverTime[#FolderMouseOverTimeNum]]][#ActivateSubFolder[#[##CURRENTSECTION#]FolderActive][#FolderMode]]
MouseLeaveAction=[!SetVariable [##CURRENTSECTION#]FolderActive 0][!SetOption #CURRENTSECTION#Arrow StrokeColor "Stroke Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!SetOption #CURRENTSECTION#Arrow FillColor "Fill Color #*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!HideMeterGroup Highlight][!SetOption #CURRENTSECTION#Folder FontColor #*DropdownFontColor1*#][!SetOption #CURRENTSECTION# FontColor "#*DropdownFontColor1*#,#*DropdownItemOpacity*#"][!UpdateMeter #CURRENTSECTION#Arrow][!UpdateMeter #CURRENTSECTION#][!Redraw]

[1]
MeterStyle=InfoStyle | InfoStyleB

[1Icon]
ImageTint=#TopBarHLColor1#

[2]
MeterStyle=InfoStyle | InfoStyleB

[2Icon]
ImageTint=#TopBarFontColor2#

[3]
MeterStyle=InfoStyle | InfoStyleB

[3Icon]
ImageTint=#TopBarStrokeColor#

[4]
MeterStyle=InfoStyle | InfoStyleB

[4Icon]
ImageTint=#TopBarHomeIconColor#

[5]
MeterStyle=InfoStyle | InfoStyleB

[5Icon]
ImageTint=#TopBarBorderTopColor#

[6]
MeterStyle=InfoStyle | InfoStyleB

[6Icon]
ImageTint=#TopBarBorderBottomColor#

[Divider1]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*1)+(#DropdownItemHeight#*6)-(#DividerHeight#/2))

[7]
MeterStyle=InfoStyle | InfoStyleB
Y=(#DividerSpace#*2)R

[7Icon]
ImageTint=#DropdownItemHL#
Y=(#DividerSpace#*2)R

[7Arrow]
Y=(#DividerSpace#*2)R

[8]
MeterStyle=InfoStyle | InfoStyleB

[8Icon]
ImageTint=#DropdownFontColor2#

[9]
MeterStyle=InfoStyle | InfoStyleB

[9Icon]
ImageTint=#DropdownStrokeColor#

[10]
MeterStyle=InfoStyle | InfoStyleB

[10Icon]
ImageTint=#DropdownSliderColor1#

[Divider2]
Y=(#DropdownIconYoffset#+#DropdownItemYOffset#+(#DividerSpace#*3)+(#DropdownItemHeight#*10)-(#DividerHeight#/2))

[11]
MeterStyle=InfoStyle | InfoStyleB
Y=(#DividerSpace#*2)R

[11Icon]
ImageTint=#BatteryChargingColor#
Y=(#DividerSpace#*2)R

[11Arrow]
Y=(#DividerSpace#*2)R

[12]
MeterStyle=InfoStyle | InfoStyleB

[12Icon]
ImageTint=#BatteryDyingColor#

[13]
MeterStyle=InfoStyle | InfoStyleB

[13Icon]
ImageTint=#BatterySaverColor#

[FolderBlock]
H=((#DropdownItemHeight#*[#SettingsMenu[#SettingsMenuBlock].[#SettingsMenuNumber]FolderCount])+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#))