[Rainmeter]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------

[MediaControlCheckChange]
Measure=String
String=[MeasurePlayerWebTitle] - [&MeasureWebArtist]
OnChangeAction=[!SetOption CustomApp#Media_Control-Yaron# Text "  [MediaControlCheckChange]  " "Droptop\DropdownBar"][!SetVariable PlayerTitle1 "[&MeasurePlayerWebTitle]" "Droptop Community Apps\Apps\Media_Control-Yaron"][!SetVariable PlayerArtist1 "[&MeasureWebArtist]" "Droptop Community Apps\Apps\Media_Control-Yaron"][!UpdateMeter CustomApp#Media_Control-Yaron# "Droptop\DropdownBar"][!UpdateMeterGroup SysTray "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"][!UpdateMeasure MeasureSongArtistName "Droptop Community Apps\Apps\Media_Control-Yaron"][!UpdateMeterGroup SongText "Droptop Community Apps\Apps\Media_Control-Yaron"][!Redraw "Droptop Community Apps\Apps\Media_Control-Yaron"]
RegExpSubstitute=1
Substitute="^ - $":"    ...    ","^(.{40})(.{0,})":"\1..."
DynamicVariables=1

[MediaControlCheckRepeat]
Measure=String
String=[MeasureRepeatWeb]
DynamicVariables=1