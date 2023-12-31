[Rainmeter]

[Variables]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

[GameHub.FileChoose]
Measure=Plugin
Plugin=FileChoose
UseNewStyle=0
GetTarget=1
AllowNonstorageFolder=1
CopyLink=1
LinkCache=#CURRENTPATH#
ReturnValue=Path
FileInitialDirectory=
DynamicVariables=1
Command1=[!SetVariable GameHub.FileLoc[#GameHub.CurrentBox] """$[Path]$"""][!SetVariable GameHub.FileLoc[#GameHub.CurrentBox] """$[Path]$""" "Droptop Community Apps\Apps\Game_Hub-Phan"][!UpdateMeterGroup GroupBox[#GameHub.CurrentBox]][!Redraw][!WriteKeyValue Variables GameHub.FileLoc[#GameHub.CurrentBox] """$[Path]$""" "#SKINSPATH#Droptop Community Apps\Apps\Game_Hub-Phan\Variables\Variables.inc"][!CommandMeasure GameHub.FileChoose "ChooseImage 2"]
Command2=[!SetVariable GameHub.WallpaperImage "$Path$"][!SetVariable GameHub.WallpaperImage "$Path$" "Droptop Community Apps\Apps\Game_Hub-Phan"][!UpdateMeasure RunCommand.GameHub.WallpaperBox][!CommandMeasure RunCommand.GameHub.WallpaperBox "Run"]
UpdateDivider=-1

[RunCommand.GameHub.WallpaperBox]
Measure=Plugin
Plugin=RunCommand
Parameter=cd "#SKINSPATH#Droptop\@Resources\Scripts\ImageMagick" & convert "[#GameHub.WallpaperImage]" "Image[#GameHub.CurrentBox].png" & mogrify -resize [#GameHub.ImageScale1]x "Image[#GameHub.CurrentBox].png" & mogrify -background white -gravity Center -extent [#GameHub.WidthImage1]x[#GameHub.HeightImage1] "Image[#GameHub.CurrentBox].png" & xcopy /E /I /Y "*.png" "#SKINSPATH#Droptop Community Apps\Apps\Game_Hub-Phan\Images\ImageSize1" & del /f /q "*.png" & convert "[#GameHub.WallpaperImage]" "Image[#GameHub.CurrentBox].png" & mogrify -resize [#GameHub.ImageScale2]x "Image[#GameHub.CurrentBox].png" & mogrify -background white -gravity Center -extent [#GameHub.WidthImage2]x[#GameHub.HeightImage2] "Image[#GameHub.CurrentBox].png" & xcopy /E /I /Y "*.png" "#SKINSPATH#Droptop Community Apps\Apps\Game_Hub-Phan\Images\ImageSize2" & del /f /q "*.png" & convert "[#GameHub.WallpaperImage]" "Image[#GameHub.CurrentBox].png" & mogrify -resize [#GameHub.ImageScale3]x "Image[#GameHub.CurrentBox].png" & mogrify -background white -gravity Center -extent [#GameHub.WidthImage3]x[#GameHub.HeightImage3] "Image[#GameHub.CurrentBox].png" & xcopy /E /I /Y "*.png" "#SKINSPATH#Droptop Community Apps\Apps\Game_Hub-Phan\Images\ImageSize3" & del /f /q "*.png" & convert "[#GameHub.WallpaperImage]" "Image[#GameHub.CurrentBox].png" & mogrify -resize [#GameHub.ImageScale4]x "Image[#GameHub.CurrentBox].png" & mogrify -background white -gravity Center -extent [#GameHub.WidthImage4]x[#GameHub.HeightImage4] "Image[#GameHub.CurrentBox].png" & xcopy /E /I /Y "*.png" "#SKINSPATH#Droptop Community Apps\Apps\Game_Hub-Phan\Images\ImageSize4" & del /f /q "*.png"
State=Hide
OutputType=ANSI
OutputFile=
FinishAction=[!UpdateMeterGroup GroupBox[#GameHub.CurrentBox]][!Redraw]
DynamicVariables=1
UpdateDivider=-1