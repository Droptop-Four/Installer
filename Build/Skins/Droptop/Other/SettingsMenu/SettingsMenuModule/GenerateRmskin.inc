[Rainmeter]

[Variables]
; VersionTypeNum=0
; VersionType0=[&*MeasureTime*]
; VersionType1=[#*CustomVersionNum*].[&*MeasureVersionTime*]

; VersionTypePostfix0=""
; VersionTypePostfix1=" v[#CustomVersionNum]"
; CustomVersionNum=0

; VersionIncrement=0.1

DropdownItemPadding1=#DropdownNoIconPadding#

; [MeasureTime]
; Measure=Time
; Format="%y.%m%d @ %H:%M"
; DynamicVariables=1

; [MeasureVersionTime]
; Measure=Time
; Format=%y.%m%d
; DynamicVariables=1

;---

; [InfoStyle]
; MouseScrollUpAction=[!SetVariable VersionTypeNum 1][!SetVariable CustomVersionNum (#CustomVersionNum#+#VersionIncrement#)][!SetOptionGroup Item Postfix ""][!SetOption #CURRENTSECTION# Postfix [#VersionTypePostfix[#VersionTypeNum]]][!UpdateMeterGroup Items][!Redraw]
; MouseScrollDownAction=[!SetVariable CustomVersionNum (#CustomVersionNum#-(#CustomVersionNum#=0?0:#VersionIncrement#))][!SetVariable VersionTypeNum ([#CustomVersionNum]=0?0:1)][!SetOptionGroup Item Postfix ""][!SetOption #CURRENTSECTION# Postfix [#VersionTypePostfix[#VersionTypeNum]]][!UpdateMeterGroup Items][!Redraw]

[MeasureAppName1]
Measure=String
String=[#CustomAppID1]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName2]
Measure=String
String=[#CustomAppID2]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName3]
Measure=String
String=[#CustomAppID3]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName4]
Measure=String
String=[#CustomAppID4]
Substitute="_":" ","-":" - "
DynamicVariables=1

[MeasureAppName5]
Measure=String
String=[#CustomAppID5]
Substitute="_":" ","-":" - "
DynamicVariables=1

;---

[MeasureName1]
Measure=String
String=[#CustomAppID1]
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
DynamicVariables=1

[MeasureName2]
Measure=String
String=[#CustomAppID2]
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
DynamicVariables=1

[MeasureName3]
Measure=String
String=[#CustomAppID3]
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
DynamicVariables=1

[MeasureName4]
Measure=String
String=[#CustomAppID4]
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
DynamicVariables=1

[MeasureName5]
Measure=String
String=[#CustomAppID5]
RegExpSubstitute=1
Substitute="_":" ","-.*$":""
DynamicVariables=1

;---

[MeasureAuthor1]
Measure=String
String=[#CustomAppID1]
RegExpSubstitute=1
Substitute="_":" ","^.*-":""
DynamicVariables=1

[MeasureAuthor2]
Measure=String
String=[#CustomAppID2]
RegExpSubstitute=1
Substitute="_":" ","^.*-":""
DynamicVariables=1

[MeasureAuthor3]
Measure=String
String=[#CustomAppID3]
RegExpSubstitute=1
Substitute="_":" ","^.*-":""
DynamicVariables=1

[MeasureAuthor4]
Measure=String
String=[#CustomAppID4]
RegExpSubstitute=1
Substitute="_":" ","^.*-":""
DynamicVariables=1

[MeasureAuthor5]
Measure=String
String=[#CustomAppID5]
RegExpSubstitute=1
Substitute="_":" ","^.*-":""
DynamicVariables=1