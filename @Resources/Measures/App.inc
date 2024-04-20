[MeasureChoose]
 Measure=Plugin
 Plugin=FileChoose
 UseNewStyle=0
 AllowNonstorageFolder=1
 CopyLink=1
 LinkCache=#CurrentPath#LinkCache\
 GetIcon=1
 IconCache=#CurrentPath#IconCache\
 IconSize=3
 ReturnValue=WholePath
 FileInitialDirectory=
 ImageInitialDirectory=#CurrentPath#IconCache\
;App1
 Command1=[!WriteKeyValue Variables "Icon1" "$Icon$" "#@#App Path.inc"][!WriteKeyValue Variables "Name1" "$Name$" "#@#App Path.inc"][!WriteKeyValue Variables "WholePath1" """$[Path]$""" "#@#App Path.inc"][!SetOptionGroup G1 AntiAlias 1][!UpdateMeterGroup G1][!Refresh]
 Command2=[!WriteKeyValue Variables "Icon1" "$Path$" "#@#App Path.inc"][!UpdateMeter AppIcon1][!Refresh]
;App2
 Command3=[!WriteKeyValue Variables "Icon2" "$Icon$" "#@#App Path.inc"][!WriteKeyValue Variables "Name2" "$Name$" "#@#App Path.inc"][!WriteKeyValue Variables "WholePath2" """$[Path]$""" "#@#App Path.inc"][!SetOptionGroup G2 AntiAlias 1][!UpdateMeterGroup G2][!Refresh]
 Command4=[!WriteKeyValue Variables "Icon2" "$Path$" "#@#App Path.inc"][!UpdateMeter AppIcon2][!Refresh]
;App3
 Command5=[!WriteKeyValue Variables "Icon3" "$Icon$" "#@#App Path.inc"][!WriteKeyValue Variables "Name3" "$Name$" "#@#App Path.inc"][!WriteKeyValue Variables "WholePath3" """$[Path]$""" "#@#App Path.inc"][!SetOptionGroup G3 AntiAlias 1][!UpdateMeterGroup G3][!Refresh]
 Command6=[!WriteKeyValue Variables "Icon3" "$Path$" "#@#App Path.inc"][!UpdateMeter AppIcon3][!Refresh]
;App4
 Command7=[!WriteKeyValue Variables "Icon4" "$Icon$" "#@#App Path.inc"][!WriteKeyValue Variables "Name4" "$Name$" "#@#App Path.inc"][!WriteKeyValue Variables "WholePath4" """$[Path]$""" "#@#App Path.inc"][!SetOptionGroup G4 AntiAlias 1][!UpdateMeterGroup G4][!Refresh]
 Command8=[!WriteKeyValue Variables "Icon4" "$Path$" "#@#App Path.inc"][!UpdateMeter AppIcon4][!Refresh]
;App5
 Command9=[!WriteKeyValue Variables "Icon5" "$Icon$" "#@#App Path.inc"][!WriteKeyValue Variables "Name5" "$Name$" "#@#App Path.inc"][!WriteKeyValue Variables "WholePath5" """$[Path]$""" "#@#App Path.inc"][!SetOptionGroup G5 AntiAlias 1][!UpdateMeterGroup G5][!Refresh]
 Command10=[!WriteKeyValue Variables "Icon5" "$Path$" "#@#App Path.inc"][!UpdateMeter AppIcon5][!Refresh]
;App6
 Command11=[!WriteKeyValue Variables "Icon6" "$Icon$" "#@#App Path.inc"][!WriteKeyValue Variables "Name6" "$Name$" "#@#App Path.inc"][!WriteKeyValue Variables "WholePath6" """$[Path]$""" "#@#App Path.inc"][!SetOptionGroup G6 AntiAlias 1][!UpdateMeterGroup G6][!Refresh]
 Command12=[!WriteKeyValue Variables "Icon6" "$Path$" "#@#App Path.inc"][!UpdateMeter AppIcon6][!Refresh]
;App7
 Command13=[!WriteKeyValue Variables "Icon7" "$Icon$" "#@#App Path.inc"][!WriteKeyValue Variables "Name7" "$Name$" "#@#App Path.inc"][!WriteKeyValue Variables "WholePath7" """$[Path]$""" "#@#App Path.inc"][!SetOptionGroup G7 AntiAlias 1][!UpdateMeterGroup G7][!Refresh]
 Command14=[!WriteKeyValue Variables "Icon7" "$Path$" "#@#App Path.inc"][!UpdateMeter AppIcon7][!Refresh]
;App8
 Command15=[!WriteKeyValue Variables "Icon8" "$Icon$" "#@#App Path.inc"][!WriteKeyValue Variables "Name8" "$Name$" "#@#App Path.inc"][!WriteKeyValue Variables "WholePath8" """$[Path]$""" "#@#App Path.inc"][!SetOptionGroup G8 AntiAlias 1][!UpdateMeterGroup G8][!Refresh]
 Command16=[!WriteKeyValue Variables "Icon8" "$Path$" "#@#App Path.inc"][!UpdateMeter AppIcon8][!Refresh]
;App9
 Command17=[!WriteKeyValue Variables "Icon9" "$Icon$" "#@#App Path.inc"][!WriteKeyValue Variables "Name9" "$Name$" "#@#App Path.inc"][!WriteKeyValue Variables "WholePath9" """$[Path]$""" "#@#App Path.inc"][!SetOptionGroup G9 AntiAlias 1][!UpdateMeterGroup G9][!Refresh]
 Command18=[!WriteKeyValue Variables "Icon9" "$Path$" "#@#App Path.inc"][!UpdateMeter AppIcon9][!Refresh]
;App10
 Command19=[!WriteKeyValue Variables "Icon10" "$Icon$" "#@#App Path.inc"][!WriteKeyValue Variables "Name10" "$Name$" "#@#App Path.inc"][!WriteKeyValue Variables "WholePath10" """$[Path]$""" "#@#App Path.inc"][!SetOptionGroup G10 AntiAlias 1][!UpdateMeterGroup G10][!Refresh]
 Command20=[!WriteKeyValue Variables "Icon10" "$Path$" "#@#App Path.inc"][!UpdateMeter AppIcon10][!Refresh]