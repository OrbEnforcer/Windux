[Bar]
 Meter = Shape
 Shape = Rectangle 0, 0, (#Scale# * 191.6), (#Size# * 37), 4 | StrokeWidth 2 | Stroke Color #Mantle# | Fill Color #Crust#
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
 ;ImageTint = #Main#
 W = (2.1 * #Scale#)
 X = (1.3 * #Scale#)
 Y = (1.1 * #Scale#)
 MouseOverAction = [!SetOption Home ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Home ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!ToggleMeterGroup HMG]

[Rainfetch]
 Meter = Image
 ImageName = #@#Images/Terminal3.png
 ImageTint = #Main#
 W = ([Home:W])
 X = (4.6 * #Scale#)
 Y = ([Home:Y])
 MouseOverAction = [!SetOption Rainfetch ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Rainfetch ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!ToggleConfig "Windux\Windowed Skins\Rainfetch" "Rainfetch.ini"]

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
 W = (#Scale# * 50)
 ClipString = 1
 Text = %1 
 X = (1.5 * #Scale#)r
 Y = (0.24 * #Scale#)
 FontSize = 1
 InLineSetting= Size | (1.1 * #Scale#)

[ACBox]
 Meter = Shape
 Shape = Rectangle 0, 0, (3 * #Scale#), (28 * #Size#), 5 | StrokeWidth 0 | Fill Color #Base# | Rotate 0
 X = (188.3 * #Scale#)
 Y = (0.7 * #Scale#)
 Hidden = 1

[AC]
 Meter = Image
 ImageName = #@#Images/AC2.png
 ImageTint = #Main#
 W = ([Home:W])
 X = (188.8 * #Scale#)
 Y = ([Home:Y])
 MouseOverAction = [!ShowMeter ACBox]
 MouseLeaveAction = [!HideMeter ACBox]
 ;LeftMouseUpAction = ["#@#AHK/ActionCenter.exe"]
 LeftMouseUpAction = [!ToggleMeterGroup ACG]

[MusicBox]
 Meter = Shape
 Shape = Rectangle 0, 0, (3 * #Scale#), (28 * #Size#), 5 | StrokeWidth 0 | Fill Color #Base# | Rotate 0
 X = (158.3 * #Scale#)
 Y = (0.7 * #Scale#)
 Hidden = 1

[DiscordBox]
 Meter = Shape
 Shape = Rectangle 0, 0, (3 * #Scale#), (28 * #Size#), 5 | StrokeWidth 0 | Fill Color #Base# | Rotate 0
 X = (3.2 * #Scale#)r
 Y = (0.7 * #Scale#)
 Hidden = 1

[WiFiBox]
 Meter = Shape
 Shape = Rectangle 0, 0, (3 * #Scale#), (28 * #Size#), 5 | StrokeWidth 0 | Fill Color #Base# | Rotate 0
 X = (3 * #Scale#)r
 Y = (0.7 * #Scale#)
 Hidden = 1

[Music]
 Meter = Image
 ImageName = #@#Images/MusicNote2
 ImageTint = #Green#
 W = (1.8 * #Scale#)
 X = (159 * #Scale#)
 Y = (1.3 * #Scale#)
 MouseOverAction = [!ShowMeter MusicBox]
 MouseLeaveAction = [!HideMeter MusicBox]
 LeftMouseUpAction = [!ToggleConfig "Windux\Windowed Skins\Player" "Player.ini" ]
 RightMouseUpAction = [!ToggleConfig "Windux\Windowed Skins\Visualizer" "Visualizer.ini" ]

[Discord]
 Meter = Image
 ImageName = #@#Images/Discord.png
 ImageTint = #Blue#
 W = ([Home:W])
 X = (3 * #Scale#)r
 Y = ([Home:Y])
 MouseOverAction = [!ShowMeter DiscordBox]
 MouseLeaveAction = [!HideMeter DiscordBox]
 LeftMouseUpAction = ["%LOCALAPPDATA%\Discord\Update.exe" --processStart Discord.exe]

[WiFiBG]
 Meter = Image
 ImageName = #@#Images/WiFi100.png
 ImageTint = #Main#80
 W = ([Home:W])
 X = (3 * #Scale#)r
 Y = ([Home:Y])

[WiFi.IMG]
 Meter = Image
 ImageName = #@#Images/WiFiOff.png
 ImageTint = #Main#
 W = ([Home:W])
 X = (0 * #Scale#)r
 Y = ([Home:Y])
 MouseOverAction = [!ShowMeter WiFiBox]
 MouseLeaveAction = [!HideMeter WiFiBox]
 LeftMouseUpAction = [!ToggleConfig "Windux\Windowed Skins\WiFi" "WiFi.ini"]

[Divider2]
 Meter = String
 Text = |
 MeterStyle = FontStyle 
 X = (167.8 * #Scale#)
 Y = (0.25 * #Scale#)

;-------------;
;DATE AND TIME;
;-------------;

[ClockBox]
 Meter = Shape
 Shape = Rectangle 0, 0, (6 * #Scale#), (28 * #Size#), 5 | StrokeWidth 0 | Fill Color #Base#
 X = (168.7 * #Scale#)
 Y = (0.7 * #Scale#)
 Hidden = 1

[Clock]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = #TF#
 X = (169.5 * #Scale#)
 Y = ([Active.txt:Y])
 MouseOverAction = [!ShowMeter ClockBox]
 MouseLeaveAction = [!HideMeter ClockBox]
 LeftMouseUpAction = [!ToggleConfig "Windux\Windowed Skins\Clock" "Windowed Clock.ini"]

[MeasureASec]
 Measure=Calc
 Formula=1-MeasureASec
 Substitute="0":"","1":":"

[Blinks]
 Meter = String
 MeasureName = MeasureASec
 MeterStyle = FontStyle
 X = (1.85 * #Scale#)r
 Y = (0.2 * #Scale#)

[Battery.IMG]
 Meter = Image
 ImageName = Battery.Measure
 ImageTint = #Main#
 W = (2 * #Scale#)
 X = (174.8 * #Scale#)
 Y = ([Home:Y])
 
[Battery.txt]
 Meter = String
 MeasureName = Battery.Measure
 MeterStyle = FontStyle
 FontFace= JetBrains Mono Medium
 FontWeight = 700
 FontColor = #Main#
 X = (2.5 * #Scale#)r
 Y = ([Active.txt:Y])
 Text = %1%

;-------------;
;Action Center;
;-------------;

[ActionCenter]
 Meter = Shape
 Shape = Rectangle 0, 0, (40 * #Scale#), (23 * #Scale#), 4 | Extend ActionStyle
 ActionStyle = StrokeWidth 2 | Stroke Color #Mantle# | Fill Color #Crust#
 X = (152 * #Scale#)
 Y = (5 * #Scale#)
 Group = ACG
 Hidden = 1
  
[ControlGroup]
 Meter = Shape
 Shape = Rectangle 0, 0, (38 * #Scale#), (10 * #Scale#), 4 | Extend ActionStyle
 ActionStyle = StrokeWidth 0 | Fill Color #Base#
 X = (1.1 * #Scale#)r
 Y = (2 * #Scale#)r
 Group = ACG
 Hidden = 1
 
[Volume.IMG]
 Meter = Image
 ImageName = #@#Images/Volume2.png
 ImageTint = #Green#
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
 Hidden = 1
 
[Volume.Bar]
 Meter = Bar
 MeterStyle = BarStyle
 MeasureName = Volume.Measure
 X = (3 * #Scale#)r
 Y = (0.6 * #Scale#)r
 Group = ACG
 Hidden = 1
 
[Volume.txt]
 Meter = String
 MeasureName = Vol.Measure
 MeterStyle = FontStyle
 FontFace= JetBrains Mono Medium
 FontWeight = 700
 FontColor = #Green#
 X = (31 * #Scale#)r
 Y = (7.4 * #Scale#)
 Text = %1
 LeftMouseUpAction = [!CommandMeasure "Volume.Measure" "ToggleMute"][!UpdateMeasure Volume.Measure][!UpdateMeasure Vol.Measure][!UpdateMeter *][!Redraw]
 Group = ACG
 Hidden = 1
 
[Brightness.IMG]
 Meter = Image
 ImageName = #@#Images/Brightness.png
 ImageTint = #Red#
 W = (2 * #Scale#)
 X = ([Volume.IMG:X])
 Y = (5.5 * #Scale#)r
 ;MouseOverAction = [!SetOption Brightness.IMG ImageAlpha "160"][!Update]
 ;MouseLeaveAction = [!SetOption Brightness.IMG ImageAlpha "255"][!Update]
 ;MouseScrollUpAction = [!CommandMeasure "Backlight" "ChangeBacklight 2"]
 ;MouseScrollDownAction = [!CommandMeasure "Backlight" "ChangeBacklight -2"]
 ;LeftMouseUpAction = []
 ;MouseActionCursorName = SIZE_NS
 Group = ACG
 Hidden = 1
 
[Brightness.Bar]
 Meter = Bar
 MeterStyle = BarStyle
 MeasureName = Backlight
 BarColor = #Red#
 SolidColor = #Red#,100
 X = (3 * #Scale#)r
 Y = (0.6 * #Scale#)r
 Group = ACG
 Hidden = 1
 
[Brightness.txt]
 Meter = String
 MeasureName = Backlight
 MeterStyle = FontStyle
 FontFace= JetBrains Mono Medium
 FontWeight = 700
 FontColor = #Red#
 X = (31 * #Scale#)r
 Y = (12 * #Scale#)
 Text = %1
 Group = ACG
 Hidden = 1
 
[KeyboardGroup]
 Meter = Shape
 Shape = Rectangle 0, 0, (38 * #Scale#), (5 * #Scale#), 4 | Extend ActionStyle
 ActionStyle = StrokeWidth 0 | Fill Color #Base#
 X = ([ControlGroup:X])
 Y = (6 * #Scale#)r
 Group = ACG
 Hidden = 1
 
[Keyboard.IMG]
 Meter = Image
 ImageName = #@#Images/Key2.png
 ImageTint = #Main#
 W = (2 * #Scale#)
 X = (1 * #Scale#)r
 Y = (1.5 * #Scale#)r
 MouseOverAction = [!SetOption Keyboard.IMG ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Keyboard.IMG ImageAlpha "255"][!Update]
 LeftMouseUpAction = ["#@#AHK/KeyboardLayout.exe"][!Delay 50][!Refresh][!Delay 25][!ShowMeterGroup ACG]
 Group = ACG
 Hidden = 1
 
[Keyboard]
 Meter = String
 MeasureName = Language
 MeterStyle = FontStyle
 FontFace= JetBrains Mono Medium
 FontWeight = 700
 StringCase = Upper
 FontColor = #Main#
 FontSize = 1
 InLineSetting= Size | (1.1 * #Scale#)
 Text = %1
 X = (3 * #Scale#)r
 Y = (18.5 * #Scale#)
 ClipString = 1
 W = (30 * #Scale#)
 Group = ACG
 Hidden = 1

[Calendar]
 Meter = String
 MeasureName = Date.Measure
 MeterStyle = FontStyle
 FontColor = #Main#
 X = (154 * #Scale#)
 Y = (23.6 * #Scale#)
 Text = %1
 Group = ACG
 Hidden = 1

[WinActionCenter]
 Meter = Image
 ImageName = #@#Images/AC.png
 ImageTint = #Main#
 W = (2 * #Scale#)
 X = (29 * #Scale#)r
 Y = (24.5 * #Scale#)
 Group = ACG
 MouseOverAction = [!SetOption WinActionCenter ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption WinActionCenter ImageAlpha "255"][!Update]
 LeftMouseUpAction = ["#@#AHK/ActionCenter.exe"]
 Hidden = 1

[NotifArea]
 Meter = Image
 ImageName = #@#Images/Notif.png
 ImageTint = #Main#
 W = (2 * #Scale#)
 X = (3 * #Scale#)r
 Y = (24.5 * #Scale#)
 Group = ACG
 MouseOverAction = [!SetOption NotifArea ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption NotifArea ImageAlpha "255"][!Update]
 LeftMouseUpAction = ["#@#AHK/Notify.exe"]
 Hidden = 1

[Settings]
 Meter = Image
 ImageName = #@#Images/Settings.png
 ImageTint = #Main#
 W = (2 * #Scale#)
 X = (3 * #Scale#)r
 Y = (24.5 * #Scale#)
 Group = ACG
 MouseOverAction = [!SetOption Settings ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Settings ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!ActivateConfig "Windux\Settings" "Settings.ini"]
 Hidden = 1

;----------;
;HOME GROUP;
;----------;

[HomeMenu]
 Meter = Shape
 Shape = Rectangle 0, 0, (40 * #Scale#), (23 * #Scale#), 4 | Extend HomeStyle
 HomeStyle = StrokeWidth 2 | Stroke Color #Mantle# | Fill Color #Crust#
 X = (0.5 * #Scale#)
 Y = (5 * #Scale#)
 Group = HMG
 Hidden = 1
 
[UserPFPContainer]
 Meter = Shape
 Shape = Rectangle 0,0,(3*#Scale#),(3*#Scale#),(3*#Scale#) | Fill Color #Main#
 Y = (2 * #Scale#)r
 X = (1.5 * #Scale#)r
 Group = HMG
 Hidden = 1
 
[UserPFP]
 Meter = Image
 ImageName = #@#Images/PFP/PFP.png
 Container = UserPFPContainer
 W = (3 * #Scale#)
 ImageTint = #Main#
 LeftMouseUpAction = ["shell:AppsFolder\Windows.ImmersiveControlPanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel"]
 MouseOverAction = [!SetOption UserPFP ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption UserPFP ImageAlpha "255"][!Update]
 Group = HMG
 Hidden = 1
 
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
 Hidden = 1

[Lock]
 Meter = Image
 ImageName = #@#Images/Lock
 ImageTint = #Main#
 W = (2.5 * #Scale#)
 X = (28.5 * #Scale#)r
 Y = (1 * #Scale#)r
 MouseOverAction = [!SetOption Lock ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption Lock ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!ActivateConfig "Windux\Windowed Skins\Lock" "Lock.ini"]
 Group = HMG
 Hidden = 1

[Row1]
 Meter = Shape
 Shape = Rectangle 0, 0, (38 * #Scale#), (5 * #Scale#), 4 | Extend HomeStyle
 HomeStyle = StrokeWidth 0 | Fill Color 0,0,0,1
 SolidColor = 0,0,0,1
 X = (1.5 * #Scale#)
 Y = (11.5 * #Scale#)
 Group = HMG
 Hidden = 1
 
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
 Hidden = 1
 
[T1]
 Meter = Image
 ImageName = #@#Images/T.png
 ImageTint = #Main#
 W = (2 * #Scale#)
 X = (32 * #Scale#)r
 Y = (1 * #Scale#)r
 Group = HMG
 MouseOverAction = [!SetOption Row1 SolidColor "#Base#"][!Update]
 MouseLeaveAction = [!SetOption Row1 SolidColor ""][!Update]
 LeftMouseUpAction = [!ToggleMeterGroup FVG]
 Hidden = 1

[Box]
 Meter = Shape
 Shape = Rectangle 0,0, (38 * #Scale#), (8 * #Scale#), 4 | Extend BGStyle
 BGStyle = StrokeWidth 2 | Stroke Color #Main# | Fill Color #Base#01
 X = (1.5 * #Scale#)
 Y = (19 * #Scale#) 
 Group = HMG
 Hidden = 1
 
[Pinned.txt]
 Meter = String
 MeterStyle = FontStyle
 Text = Pinned
 StringAlign = Center
 Group = HMG
 SolidColor = #Crust#
 W = (10 * #Scale#)
 X = (7 * #Scale#)
 Y = (17 * #Scale#)
 Hidden = 1
 
[BrowserBG]
 Meter = Shape
 Shape = Rectangle 0,0, (5 * #Scale#), (5 * #Scale#), 4 | Extend BGStyle
 BGStyle = StrokeWidth 2 | Stroke Color #Main# | Fill Color 0,0,0,1
 X = (3 * #Scale#)
 Y = (20.5 * #Scale#)
 Group = HMG
 Hidden = 1
 
[Browser]
 Meter = Image
 ImageName = #@#Images/Browsers/#Browser#
 ImageTint = #Main#
 W = (3 * #Scale#)
 X = (1 * #Scale#)r
 Y = (1 * #Scale#)r
 MouseOverAction = [!SetOption BrowserBG BGStyle "StrokeWidth 2 | Stroke Color #Base# | Fill Color #Base#"][!Update]
 MouseLeaveAction = [!SetOption BrowserBG BGStyle "StrokeWidth 2 | Stroke Color #Main# | Fill Color 0,0,0,1"][!Update]
 LeftMouseUpAction = [https://]
 Group = HMG
 Hidden = 1
 
[VSBG]
 Meter = Shape
 Shape = Rectangle 0,0, (5 * #Scale#), (5 * #Scale#), 4 | Extend BGStyle
 BGStyle = StrokeWidth 2 | Stroke Color #Main# | Fill Color 0,0,0,1
 X = (9 * #Scale#)
 Y = ([BrowserBG:Y])
 Group = HMG
 Hidden = 1
 
[VS]
 Meter = Image
 ImageName = #@#Images/Apps/VS Code
 ImageTint = #Main#
 W = (3 * #Scale#)
 X = (1 * #Scale#)r
 Y = (1 * #Scale#)r
 MouseOverAction = [!SetOption VSBG BGStyle "StrokeWidth 2 | Stroke Color #Base# | Fill Color #Base#"][!Update]
 MouseLeaveAction = [!SetOption VSBG BGStyle "StrokeWidth 2 | Stroke Color #Main# | Fill Color 0,0,0,1"][!Update]
 LeftMouseUpAction = ["E:\Microsoft VS Code\Code.exe"]
 Group = HMG
 Hidden = 1
 
[SpotiBG]
 Meter = Shape
 Shape = Rectangle 0,0, (5 * #Scale#), (5 * #Scale#), 4 | Extend BGStyle
 BGStyle = StrokeWidth 2 | Stroke Color #Main# | Fill Color 0,0,0,1
 X = (15 * #Scale#)
 Y = ([BrowserBG:Y])
 Group = HMG
 Hidden = 1
 
[Spoti]
 Meter = Image
 ImageName = #@#Images/Apps/Spotify
 ImageTint = #Main#
 W = (3 * #Scale#)
 X = (1 * #Scale#)r
 Y = (1 * #Scale#)r
 MouseOverAction = [!SetOption SpotiBG BGStyle "StrokeWidth 2 | Stroke Color #Base# | Fill Color #Base#"][!Update]
 MouseLeaveAction = [!SetOption SpotiBG BGStyle "StrokeWidth 2 | Stroke Color #Main# | Fill Color 0,0,0,1"][!Update]
 LeftMouseUpAction = ["%AppData%\Spotify\Spotify.exe"]
 Group = HMG
 Hidden = 1

[BG3]
 Meter = Shape
 Shape = Rectangle 0,0, (5 * #Scale#), (5 * #Scale#), 4 | Extend BGStyle
 BGStyle = StrokeWidth 2 | Stroke Color #Main# | Fill Color 0,0,0,1
 X = (21 * #Scale#)
 Y = ([BrowserBG:Y])
 Group = HMG
 Hidden = 1

[BG4]
 Meter = Shape
 Shape = Rectangle 0,0, (5 * #Scale#), (5 * #Scale#), 4 | Extend BGStyle
 BGStyle = StrokeWidth 2 | Stroke Color #Main# | Fill Color 0,0,0,1
 X = (27 * #Scale#)
 Y = ([BrowserBG:Y])
 Group = HMG
 Hidden = 1

[BG5]
 Meter = Shape
 Shape = Rectangle 0,0, (5 * #Scale#), (5 * #Scale#), 4 | Extend BGStyle
 BGStyle = StrokeWidth 2 | Stroke Color #Main# | Fill Color 0,0,0,1
 X = (33 * #Scale#)
 Y = ([BrowserBG:Y])
 Group = HMG
 Hidden = 1
;--------;
;EXPLORER;
;--------;

[BG]
 Meter = Shape
 Shape = Rectangle 0, 0, (40 * #Scale#), (52 * #Scale#), 4 | Extend HomeStyle
 HomeStyle = StrokeWidth 2 | Stroke Color #Mantle# | Fill Color #Crust#
 X = (42 * #Scale#)
 Y = (11 * #Scale#)
 Group = FVG
 Hidden = 1
 
[PathTitle]
 Meter = String
 MeterStyle = FontStyle
 FontColor = #Main#
 Text = Path:
 Group = FVG
 X = (0.5 * #Scale#)r
 Y = (0.1 * #Scale#)r
 Hidden = 1
 
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
 Hidden = 1
 
[FolderCountTitle]
 Meter = String
 MeterStyle = FontStyle
 FontColor = #Main#
 X = ([PathTitle:X])
 Y = (2.5 * #Scale#)r
 Text = Folders:
 Group = FVG
 Hidden = 1
 
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
 Hidden = 1
 
[FileCountTitle]
 Meter = String
 MeterStyle = FontStyle
 FontColor = #Main#
 X = (4.5 * #Scale#)r
 Y = ([FolderCountTitle:Y])
 Text = Files:
 Group = FVG
 Hidden = 1
 
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
 Hidden = 1
 
;-----;
;Index;
;-----;

[Index1]
 Meter = Image
 MeterStyle = HighlightStyle
 Y = (4 * #Scale#)r
 LeftMouseDoubleClickAction = [!CommandMeasure mIndex1Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
 RightMouseUpAction = [!CommandMeasure mIndex1Name "ContextMenu"]
 Hidden = 1
 
[Index2]
 Meter = Image
 MeterStyle = HighlightStyle
 Y = (7.4 * #Scale#)r
 LeftMouseDoubleClickAction = [!CommandMeasure mIndex2Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
 RightMouseUpAction = [!CommandMeasure mIndex2Name "ContextMenu"]
 Hidden = 1
 
[Index3]
 Meter = Image
 MeterStyle = HighlightStyle
 Y = (7.5 * #Scale#)r
 LeftMouseDoubleClickAction = [!CommandMeasure mIndex3Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
 RightMouseUpAction = [!CommandMeasure mIndex3Name "ContextMenu"]
 Hidden = 1
 
[Index4]
 Meter = Image
 MeterStyle = HighlightStyle
 Y = (7.5 * #Scale#)r
 LeftMouseDoubleClickAction = [!CommandMeasure mIndex4Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
 RightMouseUpAction = [!CommandMeasure mIndex4Name "ContextMenu"]
 Hidden = 1
 
[Index5]
 Meter = Image
 MeterStyle = HighlightStyle
 Y = (7.5 * #Scale#)r
 LeftMouseDoubleClickAction = [!CommandMeasure mIndex5Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
 RightMouseUpAction = [!CommandMeasure mIndex5Name "ContextMenu"]
 Hidden = 1
 
[Index6]
 Meter = Image
 MeterStyle = HighlightStyle
 Y = (7.5 * #Scale#)r
 LeftMouseDoubleClickAction = [!CommandMeasure mIndex6Name "FollowPath"][!UpdateMeasure mPath][!UpdateMeasureGroup Children][!UpdateMeter *][!Redraw]
 RightMouseUpAction = [!CommandMeasure mIndex6Name "ContextMenu"]
 Hidden = 1
 
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
 Hidden = 1
 
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
 Hidden = 1
 
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
 Hidden = 1
 
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
 Hidden = 1
 
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
 Hidden = 1
 
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
 Hidden = 1
 