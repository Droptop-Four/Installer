[PhanDropaction]
Measure=Plugin
Plugin=RunCommand
Parameter=del /q "#PhanRecycleFile#"
State=Hide
OutputType=ANSI
OutputFile=
FinishAction=[Play "#SKINSPATH#Droptop Community Apps\Apps\Recycle_Bin-Phan\Sounds\recycle.wav"]
DynamicVariables=1

; [PhanDroparea]
; Measure=Plugin
; Plugin=Drag&Drop
; Parent=MeasureDrop
; Bounds=CustomApp4
; Action=Path
; OnOverAction=[!SetVariable PhanRecycleFile "$Directory$\$Name$.$Type$"][!UpdateMeasure PhanDropaction]
; OnDropAction=[!CommandMeasure PhanDropaction "Run"]
; Group=Droparea
; DynamicVariables=1
