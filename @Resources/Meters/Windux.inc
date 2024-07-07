[Bar]
 Meter = Shape
 Shape = Rectangle 0, 0, (#Scale# * 191.6), (#Size# * 37), 4 | StrokeWidth 2 | Stroke Color #HC# | Fill Color #C1#
 DynamicVariables = 1
 SolidColor = 0,0,0,1
 X = 3
 Y = 2

;------------;
;LEFT SECTION;
;------------;

[Home]
 Meter = Image
 ImageName = #@#Images/Windows3.png
 ;ImageTint = #C5#
 W = (2.1 * #Scale#)
 X = (1.3 * #Scale#)
 Y = (1.1 * #Scale#)
 MouseOverAction = [!SetOption Home ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Home ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!ToggleMeterGroup HMG]

[Terminux]
 Meter = Image
 ImageName = #@#Images/Terminal3.png
 ImageTint = #C5#
 W = ([Home:W])
 X = (4.6 * #Scale#)
 Y = ([Home:Y])
 MouseOverAction = [!SetOption Terminux ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Terminux ImageAlpha "255"][!Update]
 ;LeftMouseUpAction = [!Refresh *]
 LeftMouseUpAction = ["wt.exe"]

[Divider1]
 Meter = String
 Text = |
 MeterStyle = FontStyle 
 X = (7.2 * #Scale#)
 Y = (0.25 * #Scale#)

[Active.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = Active.Measure
 W = (#Scale# * 40)
 ClipString = 1
 Text = %1 
 X = (1.5 * #Scale#)r
 Y = (0.25 * #Scale#)
 FontSize = 1
 InLineSetting= Size | (1.1 * #Scale#)

[AC]
 Meter = Image
 ImageName = #@#Images/AC.png
 ImageTint = #C5#
 W = ([Home:W])
 X = (188.8 * #Scale#)
 Y = ([Home:Y])
 MouseOverAction = [!SetOption AC ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption AC ImageAlpha "255"][!Update]
 ;LeftMouseUpAction = ["#@#AHK/ActionCenter.exe"]
 LeftMouseUpAction = [!ToggleMeterGroup ACG]

[Discord]
 Meter = Image
 ImageName = #@#Images/Discord.png
 ImageTint = #C5#
 W = ([Home:W])
 X = (153 * #Scale#)
 Y = ([Home:Y])
 MouseOverAction = [!SetOption Discord ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Discord ImageAlpha "255"][!Update]
 LeftMouseUpAction = ["%LOCALAPPDATA%\Discord\Update.exe" --processStart Discord.exe]

[Divider2]
 Meter = Shape
 Shape = Rectangle 0, 0, (14 * #Scale#), ([Bar:H]), 0 | StrokeWidth 0 | Fill Color #HC# | Rotate 0
 X = (156 * #Scale#)
 Y = [Bar:Y]

[WiFiBG]
 Meter = Image
 ImageName = #@#Images/WiFi100.png
 ImageTint = #C1#,100
 W = ([Home:W])
 X = (0.5 * #Scale#)r
 Y = ([Home:Y])

[WiFi.IMG]
 Meter = Image
 ImageName = #@#Images/WiFiOff.png
 ImageTint = #C1#
 W = ([Home:W])
 X = (0 * #Scale#)r
 Y = ([Home:Y])

[WiFi.txt]
 Meter = String
 MeasureName = Wifi.SSID
 MeterStyle = FontStyle
 FontColor = #C1#
 X = (2.5 * #Scale#)r
 Y = ([Active.txt:Y])
 W = (#Scale# * 12)
 ClipString = 1
 FontSize = 1
 InLineSetting = Size | (1.1 * #Scale#)

;-------------;
;DATE AND TIME;
;-------------;

[Divider3]
 Meter = Shape
 Shape = Rectangle 0, 0, (11.5 * #Scale#), ([Bar:H]), 0 | StrokeWidth 0 | Fill Color #HC# | Rotate 0
 X = (176.5 * #Scale#)
 Y = [Bar:Y]

[Clock]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = #TF#
 X = (171 * #Scale#)
 Y = ([Active.txt:Y])

[MeasureASec]
 Measure=Calc
 Formula=1-MeasureASec
 Substitute="0":"","1":":"
 UpdateDivider = 50

[Blinks]
 Meter = String
 MeasureName = MeasureASec
 MeterStyle = FontStyle
 X = (1.85 * #Scale#)r
 Y = (0.2 * #Scale#)

[Calendar]
 Meter = String
 MeasureName = Date.Measure
 MeterStyle = FontStyle
 FontColor = #C1#
 X = (177 * #Scale#)
 Y = ([Active.txt:Y])
 Text = %1

;-----;
;MUSIC;
;-----;

[Title.txt]
 Meter = String
 MeasureName = Title
 MeterStyle = FontStyle
 FontColor = #Spotippucin Green#
 StringAlign = Center
 X = (97 * #Scale#)
 Y = ([Active.txt:Y])
 W = (#Scale# * 30)
 ClipString = 1
 FontSize = 1
 InLineSetting = Size | (1.1 * #Scale#)
 Group = On
 Text =  %1 
 LeftMouseUpAction = [!CommandMeasure "StateButton" "PlayPause"]

[Next]
 Meter = Image
 ImageName = #@#Images/Next5.png
 X = (114 * #Scale#)
 Y = (1.2 * #Scale#)
 W = (1.8 * #Scale#)
 ImageTint = #Spotippucin Green#
 Group = On
 LeftMouseUpAction = [!CommandMeasure "Title" "Next"]
 MouseOverAction = [!SetOption Next ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Next ImageAlpha "255"][!Update]

[Prev]
 Meter = Image
 ImageName = #@#Images/Prev5.png
 X = (78.3 * #Scale#)
 Y = 0r
 W = ([Next:W])
 ImageTint = #Spotippucin Green#
 Group = On
 LeftMouseUpAction = [!CommandMeasure "Title" "Previous"]
 MouseOverAction = [!SetOption Prev ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Prev ImageAlpha "255"][!Update]

;-------------;
;Action Center;
;-------------;

[ActionCenter]
 Meter = Shape
 Shape = Rectangle 0, 0, (40 * #Scale#), (23 * #Scale#), 4 | Extend ActionStyle
 ActionStyle = StrokeWidth 2 | Stroke Color #HC# | Fill Color #C1#
 X = (152 * #Scale#)
 Y = (5 * #Scale#)
 Group = ACG

[ControlGroup]
 Meter = Shape
 Shape = Rectangle 0, 0, (38 * #Scale#), (10 * #Scale#), 4 | Extend ActionStyle
 ActionStyle = StrokeWidth 0 | Fill Color #Base#
 X = (1.1 * #Scale#)r
 Y = (2 * #Scale#)r
 Group = ACG

[Volume.IMG]
 Meter = Image
 ImageName = #@#Images/Volume2.png
 ImageTint = #Spotippucin Green#
 W = (2 * #Scale#)
 X = (1 * #Scale#)r
 Y = (1.5 * #Scale#)r
 MouseOverAction = [!SetOption Volume.IMG ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Volume.IMG ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!CommandMeasure "Volume.Measure" "ToggleMute"][!UpdateMeasure Volume.Measure][!UpdateMeasure Vol.Measure][!UpdateMeter *][!Redraw]
 MouseScrollUpAction = [!CommandMeasure "Volume.Measure" "ChangeVolume 2"]
 MouseScrollDownAction = [!CommandMeasure "Volume.Measure" "ChangeVolume -2"]
 MouseActionCursorName = SIZE_NS
 Group = ACG

[Volume.Bar]
 Meter = Bar
 MeterStyle = BarStyle
 MeasureName = Volume.Measure
 X = (3 * #Scale#)r
 Y = (0.6 * #Scale#)r
 Group = ACG

[Volume.txt]
 Meter = String
 MeasureName = Vol.Measure
 MeterStyle = FontStyle
 FontFace= JetBrains Mono Medium
 FontWeight = 700
 FontColor = #Spotippucin Green#
 X = (31 * #Scale#)r
 Y = (7.4 * #Scale#)
 Text = %1
 LeftMouseUpAction = [!CommandMeasure "Volume.Measure" "ToggleMute"][!UpdateMeasure Volume.Measure][!UpdateMeasure Vol.Measure][!UpdateMeter *][!Redraw]
 Group = ACG

[Brightness.IMG]
 Meter = Image
 ImageName = #@#Images/Brightness.png
 ImageTint = #C6#
 W = ([Volume.IMG:W])
 X = ([Volume.IMG:X])
 Y = (5.5 * #Scale#)r
 MouseOverAction = [!SetOption Brightness.IMG ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Brightness.IMG ImageAlpha "255"][!Update]
 MouseScrollUpAction = [!CommandMeasure "Backlight" "ChangeBacklight 2"]
 MouseScrollDownAction = [!CommandMeasure "Backlight" "ChangeBacklight -2"]
 LeftMouseUpAction = []
 MouseActionCursorName = SIZE_NS
 Group = ACG

[Brightness.Bar]
 Meter = Bar
 MeterStyle = BarStyle
 MeasureName = Backlight
 BarColor = #C6#
 SolidColor = #C6#,100
 X = (3 * #Scale#)r
 Y = (0.6 * #Scale#)r
 Group = ACG

[Brightness.txt]
 Meter = String
 MeasureName = Backlight
 MeterStyle = FontStyle
 FontFace= JetBrains Mono Medium
 FontWeight = 700
 FontColor = #C6#
 X = (31 * #Scale#)r
 Y = (12 * #Scale#)
 Text = %1
 Group = ACG

[KeyboardGroup]
 Meter = Shape
 Shape = Rectangle 0, 0, (38 * #Scale#), (5 * #Scale#), 4 | Extend ActionStyle
 ActionStyle = StrokeWidth 0 | Fill Color #Base#
 X = ([ControlGroup:X])
 Y = (6 * #Scale#)r
 Group = ACG

[Keyboard.IMG]
 Meter = Image
 ImageName = #@#Images/Key2.png
 ImageTint = #C5#
 W = ([Volume.IMG:W])
 X = (1 * #Scale#)r
 Y = (1.5 * #Scale#)r
 MouseOverAction = [!SetOption Keyboard.IMG ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Keyboard.IMG ImageAlpha "255"][!Update]
 LeftMouseUpAction = ["#@#AHK/KeyboardLayout.exe"][!Delay 100][!Refresh][!Delay 250][!ShowMeterGroup ACG]
 Group = ACG

[Keyboard]
 Meter = String
 MeasureName = Language
 MeterStyle = FontStyle
 FontFace= JetBrains Mono Medium
 FontWeight = 700
 StringCase = Upper
 FontColor = #C5#
 FontSize = 1
 InLineSetting= Size | (1.1 * #Scale#)
 Text = %1
 X = (3 * #Scale#)r
 Y = (18.5 * #Scale#)
 ClipString = 1
 W = (30 * #Scale#)
 Group = ACG

[Battery.IMG]
 Meter = Image
 ImageName = #@#Images/Battery0.png
 ImageTint = #C5#
 W = ([Volume.IMG:W])
 X = (153 * #Scale#)
 Y = (24.5 * #Scale#)
 Group = ACG
 
[Battery.txt]
 Meter = String
 MeasureName = Battery.Measure
 MeterStyle = FontStyle
 FontFace= JetBrains Mono Medium
 FontWeight = 700
 FontColor = #C5#
 X = (3 * #Scale#)r
 Y = (23.6 * #Scale#)
 Text = %1%
 Group = ACG

[Settings]
 Meter = Image
 ImageName = #@#Images/Settings.png
 ImageTint = #C5#
 W = ([Volume.IMG:W])
 X = (32 * #Scale#)r
 Y = (24.5 * #Scale#)
 Group = ACG
 MouseOverAction = [!SetOption Settings ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Settings ImageAlpha "255"][!Update]
 LeftMouseUpAction = []

;----------;
;HOME GROUP;
;----------;

[HomeMenu]
 Meter = Shape
 Shape = Rectangle 0, 0, (40 * #Scale#), (23 * #Scale#), 4 | Extend HomeStyle
 HomeStyle = StrokeWidth 2 | Stroke Color #HC# | Fill Color #C1#
 X = (0.5 * #Scale#)
 Y = (5 * #Scale#)
 Group = HMG

[UserPFPContainer]
 Meter = Shape
 Shape = Rectangle 0,0,(3*#Scale#),(3*#Scale#),(3*#Scale#) | Fill Color #HC#
 Y = (2 * #Scale#)r
 X = (1.5 * #Scale#)r
 Group = HMG

[UserPFP]
 Meter = Image
 ImageName = #@#Images/PFP/PFP.png
 Container = UserPFPContainer
 W = (3 * #Scale#)
 ImageTint = #HC#
 LeftMouseUpAction = ["shell:AppsFolder\Windows.ImmersiveControlPanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel"]
 MouseOverAction = [!SetOption UserPFP ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption UserPFP ImageAlpha "255"][!Update]
 Group = HMG

[User]
 Meter = String
 MeterStyle = FontStyle
 StringCase = None
 FontSize = (1.2 * #Scale#)
 FontWeight = 700
 MeasureName = UserName
 Text = user/@%1
 X = (5 * #Scale#)r
 Y = (6.5 * #Scale#)
 Group = HMG

[Row1]
 Meter = Shape
 Shape = Rectangle 0, 0, (38 * #Scale#), (5 * #Scale#), 4 | Extend HomeStyle
 HomeStyle = StrokeWidth 0 | Fill Color 0,0,0,1
 SolidColor = 0,0,0,1
 X = (1.5 * #Scale#)
 Y = (5 * #Scale#)r
 Group = HMG

[FileExplorer]
 Meter = String
 MeterStyle = FontStyle
 X = (2 * #Scale#)r
 Y = (0.8 * #Scale#)r
 W = (35 * #Scale#)
 Text = Files 
 Group = HMG
 MouseOverAction = [!SetOption Row1 SolidColor "#Base#"][!Update]
 MouseLeaveAction = [!SetOption Row1 SolidColor ""][!Update]
 LeftMouseUpAction = [!ToggleMeterGroup FVG]

[T1]
 Meter = Image
 ImageName = #@#Images/T.png
 ImageTint = #C5#
 W = ([Volume.IMG:W])
 X = (32 * #Scale#)r
 Y = (1 * #Scale#)r
 Group = HMG
 MouseOverAction = [!SetOption Row1 SolidColor "#Base#"][!Update]
 MouseLeaveAction = [!SetOption Row1 SolidColor ""][!Update]
 LeftMouseUpAction = [!ToggleMeterGroup FVG]

[Box]
 Meter = Shape
 Shape = Rectangle 0,0, (38 * #Scale#), (8 * #Scale#), 4 | Extend BGStyle
 BGStyle = StrokeWidth 2 | Stroke Color #HC# | Fill Color #Base#,1
 X = (1.5 * #Scale#)
 Y = (18 * #Scale#) 
 Group = HMG

[Pinned.txt]
 Meter = String
 MeterStyle = FontStyle
 Text = Pinned
 StringAlign = Center
 Group = HMG
 SolidColor = #C1#
 W = (10 * #Scale#)
 X = (7 * #Scale#)
 Y = (16 * #Scale#)

[BrowserBG]
 Meter = Shape
 Shape = Rectangle 0,0, (5 * #Scale#), (5 * #Scale#), 4 | Extend BGStyle
 BGStyle = StrokeWidth 2 | Stroke Color #HC# | Fill Color 0,0,0,1
 X = (3 * #Scale#)
 Y = (19.5 * #Scale#)
 Group = HMG

[Browser]
 Meter = Image
 ImageName = #@#Images/Browsers/#Browser#
 ImageTint = #C5#
 W = (3 * #Scale#)
 X = (1 * #Scale#)r
 Y = (1 * #Scale#)r
 MouseOverAction = [!SetOption BrowserBG BGStyle "StrokeWidth 2 | Stroke Color #Base# | Fill Color #Base#"][!Update]
 MouseLeaveAction = [!SetOption BrowserBG BGStyle "StrokeWidth 2 | Stroke Color #HC# | Fill Color 0,0,0,1"][!Update]
 LeftMouseUpAction = [https://]
 Group = HMG

[VSBG]
 Meter = Shape
 Shape = Rectangle 0,0, (5 * #Scale#), (5 * #Scale#), 4 | Extend BGStyle
 BGStyle = StrokeWidth 2 | Stroke Color #HC# | Fill Color 0,0,0,1
 X = (9 * #Scale#)
 Y = ([BrowserBG:Y])
 Group = HMG

[VS]
 Meter = Image
 ImageName = #@#Images/Apps/VS Code
 ImageTint = #C5#
 W = (3 * #Scale#)
 X = (1 * #Scale#)r
 Y = (1 * #Scale#)r
 MouseOverAction = [!SetOption VSBG BGStyle "StrokeWidth 2 | Stroke Color #Base# | Fill Color #Base#"][!Update]
 MouseLeaveAction = [!SetOption VSBG BGStyle "StrokeWidth 2 | Stroke Color #HC# | Fill Color 0,0,0,1"][!Update]
 LeftMouseUpAction = ["E:\Microsoft VS Code\Code.exe"]
 Group = HMG

[SpotiBG]
 Meter = Shape
 Shape = Rectangle 0,0, (5 * #Scale#), (5 * #Scale#), 4 | Extend BGStyle
 BGStyle = StrokeWidth 2 | Stroke Color #HC# | Fill Color 0,0,0,1
 X = (15 * #Scale#)
 Y = ([BrowserBG:Y])
 Group = HMG

[Spoti]
 Meter = Image
 ImageName = #@#Images/Apps/Spotify
 ImageTint = #C5#
 W = (3 * #Scale#)
 X = (1 * #Scale#)r
 Y = (1 * #Scale#)r
 MouseOverAction = [!SetOption SpotiBG BGStyle "StrokeWidth 2 | Stroke Color #Base# | Fill Color #Base#"][!Update]
 MouseLeaveAction = [!SetOption SpotiBG BGStyle "StrokeWidth 2 | Stroke Color #HC# | Fill Color 0,0,0,1"][!Update]
 LeftMouseUpAction = ["C:\Users\shwet\AppData\Roaming\Spotify\Spotify.exe"]
 Group = HMG

;--------;
;EXPLORER;
;--------;

[BG]
 Meter = Shape
 Shape = Rectangle 0, 0, (40 * #Scale#), (52 * #Scale#), 4 | Extend HomeStyle
 HomeStyle = StrokeWidth 2 | Stroke Color #HC# | Fill Color #C1#
 X = (42 * #Scale#)
 Y = (11 * #Scale#)
 Group = FVG

[PathTitle]
 Meter = String
 MeterStyle = FontStyle
 FontColor = #HC#
 Text = Path:
 Group = FVG
 X = (0.5 * #Scale#)r
 Y = (0.1 * #Scale#)r

[Path]
 Meter = String
 MeasureName = mPath
 MeterStyle = FontStyle 
 Text = "%1 "
 X = (5 * #Scale#)r
 Y = (0 * #Scale#)r
 W = (#Scale# * 30)
 Group = FVG
 ClipString = 1

[FolderCountTitle]
 Meter = String
 MeterStyle = FontStyle
 FontColor = #HC#
 X = ([PathTitle:X])
 Y = (2.5 * #Scale#)r
 Text = Folders:
 Group = FVG

[FolderCount]
 Meter = String
 MeasureName = mFolderCount
 MeterStyle = FontStyle
 X = (8 * #Scale#)r
 Y = (0 * #Scale#)r
 W = (#Scale# * 4)
 Group = FVG
 ClipString = 1
 FontSize = 1
 InLineSetting = Size | (1.1 * #Scale#)

[FileCountTitle]
 Meter = String
 MeterStyle = FontStyle
 FontColor = #HC#
 X = (4.5 * #Scale#)r
 Y = ([FolderCountTitle:Y])
 Text = Files:
 Group = FVG

[FileCount]
 Meter = String
 MeasureName = mFileCount
 MeterStyle = FontStyle
 X = (6 * #Scale#)r
 Y = (0 * #Scale#)r
 W = (#Scale# * 4)
 Group = FVG
 ClipString = 1
 FontSize = 1
 InLineSetting = Size | (1.1 * #Scale#)

;-----;
;Index;
;-----;

[Index1]
 Meter = Image
 MeterStyle = HighlightStyle
 Y = (4 * #Scale#)r
 LeftMouseDoubleClickAction = [!CommandMeasure mIndex1Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
 RightMouseUpAction = [!CommandMeasure mIndex1Name "ContextMenu"]

[Index2]
 Meter = Image
 MeterStyle = HighlightStyle
 Y = (7.4 * #Scale#)r
 LeftMouseDoubleClickAction = [!CommandMeasure mIndex2Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
 RightMouseUpAction = [!CommandMeasure mIndex2Name "ContextMenu"]

[Index3]
 Meter = Image
 MeterStyle = HighlightStyle
 Y = (7.5 * #Scale#)r
 LeftMouseDoubleClickAction = [!CommandMeasure mIndex3Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
 RightMouseUpAction = [!CommandMeasure mIndex3Name "ContextMenu"]

[Index4]
 Meter = Image
 MeterStyle = HighlightStyle
 Y = (7.5 * #Scale#)r
 LeftMouseDoubleClickAction = [!CommandMeasure mIndex4Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
 RightMouseUpAction = [!CommandMeasure mIndex4Name "ContextMenu"]

[Index5]
 Meter = Image
 MeterStyle = HighlightStyle
 Y = (7.5 * #Scale#)r
 LeftMouseDoubleClickAction = [!CommandMeasure mIndex5Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
 RightMouseUpAction = [!CommandMeasure mIndex5Name "ContextMenu"]

[Index6]
 Meter = Image
 MeterStyle = HighlightStyle
 Y = (7.5 * #Scale#)r
 LeftMouseDoubleClickAction = [!CommandMeasure mIndex6Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
 RightMouseUpAction = [!CommandMeasure mIndex6Name "ContextMenu"]

;-----;
;ICONS;
;-----;

[Index1Icon]
 Meter = Image
 MeasureName = mIndex1Icon
 MeterStyle = IconStyle
 Y = (19 * #Scale#)

[Index2Icon]
 Meter = Image
 MeasureName = mIndex2Icon
 MeterStyle = IconStyle

[Index3Icon]
 Meter = Image
 MeasureName = mIndex3Icon
 MeterStyle = IconStyle

[Index4Icon]
 Meter = Image
 MeasureName = mIndex4Icon
 MeterStyle = IconStyle
 Y = (7.6 * #Scale#)r

[Index5Icon]
 Meter = Image
 MeasureName = mIndex5Icon
 MeterStyle = IconStyle
 Y = (7.5 * #Scale#)r

[Index6Icon]
 Meter = Image
 MeasureName = mIndex6Icon
 MeterStyle = IconStyle
 Y = (7.5 * #Scale#)r

;----------;
;Index Info;
;----------;

[Index1Info]
 Meter = String
 MeasureName = mIndex1Name
 MeasureName2 = mIndex1Size
 MeasureName3 = mIndex1Date
 MeterStyle = FontStyle
 X = (3.5 * #Scale#)r
 Y = (17.7 * #Scale#)
 W = (30 * #Scale#)
 ClipString = 1 
 Text = "%1 #CRLF#%2 #CRLF#%3 "
 AutoScale = 1
 Group = FVG

[Index2Info]
 Meter = String
 MeasureName = mIndex2Name
 MeasureName2 = mIndex2Size
 MeasureName3 = mIndex2Date
 MeterStyle = FontStyle
 X = (0 * #Scale#)r
 Y = (7.5 * #Scale#)r
 W = (30 * #Scale#)
 ClipString = 1 
 Text = "%1 #CRLF#%2 #CRLF#%3 "
 AutoScale = 1
 Group = FVG

[Index3Info]
 Meter = String
 MeasureName = mIndex3Name
 MeasureName2 = mIndex3Size
 MeasureName3 = mIndex3Date
 MeterStyle = FontStyle
 X = (0 * #Scale#)r
 Y = (7.5 * #Scale#)r
 W = (30 * #Scale#)
 ClipString = 1 
 Text = "%1 #CRLF#%2 #CRLF#%3 "
 AutoScale = 1
 Group = FVG

[Index4Info]
 Meter = String
 MeasureName = mIndex4Name
 MeasureName2 = mIndex4Size
 MeasureName3 = mIndex4Date
 MeterStyle = FontStyle
 X = (0 * #Scale#)r
 Y = (7.5 * #Scale#)r
 W = (30 * #Scale#)
 ClipString = 1 
 Text = "%1 #CRLF#%2 #CRLF#%3 "
 AutoScale = 1
 Group = FVG

[Index5Info]
 Meter = String
 MeasureName = mIndex5Name
 MeasureName2 = mIndex5Size
 MeasureName3 = mIndex5Date
 MeterStyle = FontStyle
 X = (0 * #Scale#)r
 Y = (7.5 * #Scale#)r
 W = (30 * #Scale#)
 ClipString = 1 
 Text = "%1 #CRLF#%2 #CRLF#%3 "
 AutoScale = 1
 Group = FVG

[Index6Info]
 Meter = String
 MeasureName = mIndex6Name
 MeasureName2 = mIndex6Size
 MeasureName3 = mIndex6Date
 MeterStyle = FontStyle
 X = (0 * #Scale#)r
 Y = (7.5 * #Scale#)r
 W = (30 * #Scale#)
 ClipString = 1 
 Text = "%1 #CRLF#%2 #CRLF#%3 "
 AutoScale = 1
 Group = FVG