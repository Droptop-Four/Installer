[CustomApp1]
Meter=String
StringAlign=Left
Padding=0,0,0,0
MouseOverAction=[]
MouseLeaveAction=[]
LeftMouseDownAction=[]
LeftMouseUpAction=[]
H=#TopHeight#
W=(((((#TopHeight#+#TopBarIconHOffset#)*1.5)+(#TopBarSysAppWPadding#*2))-((((#TopHeight#+#TopBarIconHOffset#)*1.5)+(#TopBarSysAppWPadding#*2))%1))*#Shortcut.NumberOfShortcuts#)
DynamicVariables=1

; --------

[ShortcutButtonStyle]
ImageName=[#LocationShortcutButton[##CURRENTSECTION#]]
MiddleMouseDownAction=[!SetVariable CurrentShortcut [##CURRENTSECTION#]][!UpdateMeter MeasureQuickLink][!CommandMeasure MeasureQuickLink "+#CURRENTSECTION#"]
MouseOverAction=[!SetVariable HighlightedButton #CURRENTSECTION#][!EnableMouseActionGroup "MouseOverAction" Buttons#ActiveFolder##ActiveTray#][!ShowMeterGroup Highlight][!UpdateMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!UpdateMeterGroup Folders][!Redraw]
MouseLeaveAction=[!HideMeterGroup Highlight][!UpdateMeter #CURRENTSECTION#][!Redraw]
LeftMouseDownAction=[#PathShortcutButton[##CURRENTSECTION#]]
X=R
Padding=#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1)),#TopBarSysAppWPadding#,(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)+(((#TopHeight#-(#TopHeight#+#TopBarIconHOffset#))/2)%1))
Y=(#TopBarSysIconYOffset#)
W=((#TopHeight#+#TopBarIconHOffset#)*1.5)
H=(#TopHeight#+#TopBarIconHOffset#)
Group=CustomApp1Sys | SysTray | Animation | Buttons00 | AppButtonCustomApp1 | CustomAppButton
Container=SystemTrayContainer
DynamicVariables=1
Greyscale=#Shortcut.Greyscale#
Hidden=([##CURRENTSECTION#]>#Shortcut.NumberOfShortcuts#?1:0)

[ShortcutButton1]
Meter=Image
MeterStyle=InfoStyle | ShortcutButtonStyle
X=[#SideAppSlotXPos[#SideAppPosCustomApp1]]

[ShortcutButton2]
Meter=Image
MeterStyle=InfoStyle | ShortcutButtonStyle

[ShortcutButton3]
Meter=Image
MeterStyle=InfoStyle | ShortcutButtonStyle

[ShortcutButton4]
Meter=Image
MeterStyle=InfoStyle | ShortcutButtonStyle

[ShortcutButton5]
Meter=Image
MeterStyle=InfoStyle | ShortcutButtonStyle

; ---------------------------------------------------

[RunCommand.CustomButtonPhan]
Measure=Plugin
Plugin=RunCommand
Parameter=del /f /q "#SKINSPATH#Droptop Community Apps\Apps\Shortcut-Phan\Icons\Button*[#CurrentShortcut].png" & cd "#SKINSPATH#Droptop\@Resources\Scripts\ImageMagick" & convert "#Button#" -fill white "Button[#CurrentShortcut].png" & mogrify -resize 32x32! "Button[#CurrentShortcut].png" & convert "#SKINSPATH#Droptop\@Resources\Scripts\ImageMagick\Button[#CurrentShortcut].png" ^( +clone -background black -shadow 80x4+0+2 ^) +swap -background none -layers merge +repage "ButtonS[#CurrentShortcut].png" & mogrify -background none -gravity Center -extent 78x52 -roll +0+0 "Button[#CurrentShortcut].png" & mogrify -background none -gravity Center -extent 78x52 -roll +0+0 "Button[#CurrentShortcut].png" & mogrify -background none -gravity Center -extent 78x52 -roll +0+1 "ButtonS[#CurrentShortcut].png" & mogrify -background none -gravity Center -extent 78x52 -roll +0+1 "ButtonS[#CurrentShortcut].png" & xcopy /E /I /Y "*.png" "#SKINSPATH#Droptop Community Apps\Apps\Shortcut-Phan\Icons\" & del /f /q "*.png" & del /f /q "#SKINSPATH#Droptop Community Apps\Apps\Shortcut-Phan\Icons\_*.png"
State=Hide
OutputType=ANSI
OutputFile=
DynamicVariables=1
FinishAction=[!UpdateMeterGroup CustomAppButton][!Redraw]

; --------

[MeasureQuickLink]
Measure=Plugin
Plugin=QuickLink
GetTarget=1
IconCache=#SKINSPATH#Droptop Community Apps\Apps\Shortcut-Phan\Icons\
IconSize=1
LinkAction=[!SetVariable QuickLinkMode 1][!SetVariable Button "$Icon$"][!SetVariable Path$Meter$ """$[Path]$"""][!WriteKeyValue Variables Path$Meter$ """$[Path]$""" "#SKINSPATH#Droptop Community Apps\Apps\Shortcut-Phan\Variables\Variables.inc"][!UpdateMeasure RunCommand.CustomButtonPhan][!CommandMeasure RunCommand.CustomButtonPhan "Run"]
DynamicVariables=1

; --------

; [DragDrop1]
; Measure=Plugin
; Plugin=Drag&Drop
; Parent=MeasureDrop
; Bounds=ShortcutButton1
; Action=Path
; OnOverAction=[!SetVariable CurrentShortcut 1]
; OnDropAction=[!SetVariable QuickLinkMode 0][!SetVariable Button "$File$"][!UpdateMeasure RunCommand.CustomButtonPhan][!CommandMeasure RunCommand.CustomButtonPhan "Run"]

; [DragDrop2]
; Measure=Plugin
; Plugin=Drag&Drop
; Parent=MeasureDrop
; Bounds=ShortcutButton2
; Action=Path
; OnOverAction=[!SetVariable CurrentShortcut 2]
; OnDropAction=[!SetVariable QuickLinkMode 0][!SetVariable Button "$File$"][!UpdateMeasure RunCommand.CustomButtonPhan][!CommandMeasure RunCommand.CustomButtonPhan "Run"]

; [DragDrop3]
; Measure=Plugin
; Plugin=Drag&Drop
; Parent=MeasureDrop
; Bounds=ShortcutButton3
; Action=Path
; OnOverAction=[!SetVariable CurrentShortcut 3]
; OnDropAction=[!SetVariable QuickLinkMode 0][!SetVariable Button "$File$"][!UpdateMeasure RunCommand.CustomButtonPhan][!CommandMeasure RunCommand.CustomButtonPhan "Run"]

; [DragDrop4]
; Measure=Plugin
; Plugin=Drag&Drop
; Parent=MeasureDrop
; Bounds=ShortcutButton4
; Action=Path
; OnOverAction=[!SetVariable CurrentShortcut 4]
; OnDropAction=[!SetVariable QuickLinkMode 0][!SetVariable Button "$File$"][!UpdateMeasure RunCommand.CustomButtonPhan][!CommandMeasure RunCommand.CustomButtonPhan "Run"]

; [DragDrop5]
; Measure=Plugin
; Plugin=Drag&Drop
; Parent=MeasureDrop
; Bounds=ShortcutButton5
; Action=Path
; OnOverAction=[!SetVariable CurrentShortcut 5]
; OnDropAction=[!SetVariable QuickLinkMode 0][!SetVariable Button "$File$"][!UpdateMeasure RunCommand.CustomButtonPhan][!CommandMeasure RunCommand.CustomButtonPhan "Run"]

; ---------------------------------------------------
