[Variables]

[CustomApp4]
Meter=String
StringAlign=LeftCenter
Text="    ...    "
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))
W=
FontColor=#TopBarFontColor1#,(#TopBarOpacity1#<>0?138:#TopBarTitleOpacity#)
MouseLeaveAction=[!SetVariable ActionSelect 0][!SetVariable AppMiddleSelect 0][!SetVariable HomeMiddleSelect 0][!CommandMeasure MeasureActionTimer "[#Stop[#StopBlock]] 3"][!SetOptionGroup #CURRENTSECTION#Sys ImageTint "#*TopBarFontColor1*#,#*TopBarTitleOpacity*#"][!SetOptionGroup #CURRENTSECTION#Sys FontColor "#*TopBarFontColor1*#,#*TopBarTitleOpacity*#"][!SetOption #CURRENTSECTION# FontColor "#*TopBarFontColor1*#,(#*TopBarOpacity1*#<>0?138:#*TopBarTitleOpacity*#)"][!HideMeterGroup Highlight][!UpdateMeterGroup #CURRENTSECTION#Sys][!Redraw]
UpdateDivider=1
DynamicVariables=1
TrailingSpaces=1
