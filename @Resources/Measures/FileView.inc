[IconStyle]
 W = (2 * #Scale#) 
 X = (45 * #Scale#)
 Y = (7.3 * #Scale#)r
 AntiAlias = 1
 ImageTint = #HC#
 Group = FVG
 Hidden = 1 

[HighlightStyle]
 SolidColor=0,0,0,1
 X = (43 * #Scale#)
 Y = (6.5 * #Scale#)r
 W = (38 * #Scale#)
 H = (5 * #Scale#)
 DynamicVariables = 1
 Group = FVG
 MouseOverAction = [!SetOption #CURRENTSECTION# SolidColor "#Base#"][!UpdateMeter #CURRENTSECTION#][!Redraw]
 MouseLeaveAction = [!SetOption #CURRENTSECTION# SolidColor ""][!UpdateMeter #CURRENTSECTION#][!Redraw]

;--------;
;MEASURES;
;--------;

[mPath]
 Measure = Plugin
 Plugin = FileView
 ShowHidden = 0
 Path = ""
 Count = 6

[mFolderCount]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FolderCount
 Group = Children

[mFileCount]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileCount
 Group = Children

[mFolderSize]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FolderSize
 Group = Children

;-------;
;Index 1;
;-------;

[mIndex1Name]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileName
 Index = 1
 Group = Children

[mIndex1Size]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileSize
 Index = 1
 Group = Children

[mIndex1Date]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileDate
 Index = 1
 Group = Children

[mIndex1Icon]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = Icon
 IconSize = #IconSize#
 Index = 1
 Group = Children
 Substitute= "icon1.ico" : "File.ico"

;-------;
;Index 2;
;-------;

[mIndex2Name]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileName
 Index = 2
 Group = Children

[mIndex2Size]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileSize
 Index = 2
 Group = Children

[mIndex2Date]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileDate
 Index = 2
 Group = Children

[mIndex2Icon]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = Icon
 IconSize = #IconSize#
 Index = 2
 Group = Children
 Substitute= "icon2.ico" : "File.ico"

;-------;
;Index 3;
;-------;

[mIndex3Name]
  Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileName
 Index = 3
 Group = Children

[mIndex3Size]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileSize
 Index = 3
 Group = Children

[mIndex3Date]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileDate
 Index = 3
 Group = Children

[mIndex3Icon]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = Icon
 IconSize = #IconSize#
 Index = 3
 Group = Children
 Substitute= "icon3.ico" : "File.ico"

;-------;
;Index 4;
;-------;

[mIndex4Name]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileName
 Index = 4
 Group = Children

[mIndex4Size]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileSize
 Index = 4
 Group = Children

[mIndex4Date]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileDate
 Index = 4
 Group = Children

[mIndex4Icon]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = Icon
 IconSize = #IconSize#
 Index = 4
 Group = Children
 Substitute= "icon4.ico" : "File.ico"

;-------;
;Index 5;
;-------;

[mIndex5Name]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileName
 Index = 5
 Group = Children

[mIndex5Size]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileSize
 Index = 5
 Group = Children

[mIndex5Date]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileDate
 Index = 5
 Group = Children

[mIndex5Icon]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = Icon
 IconSize = #IconSize#
 Index = 5
 Group = Children
 Substitute= "icon5.ico" : "File.ico"

;-------;
;Index 6;
;-------;

[mIndex6Name]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileName
 Index = 6
 Group = Children

[mIndex6Size]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileSize
 Index = 6
 Group = Children

[mIndex6Date]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = FileDate
 Index = 6
 Group = Children

[mIndex6Icon]
 Measure = Plugin
 Plugin = FileView
 Path = [mPath]
 Type = Icon
 IconSize = #IconSize#
 Index = 6
 Group = Children
 Substitute= "icon6.ico" : "File.ico"