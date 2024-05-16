[FontStyle]
 FontFace= JetBrains Mono Medium
 FontWeight = 900
 FontColor = #HC#
 FontSize=(1.2*#Scale#)
 AntiAlias=1
 SolidColor=0,0,0,1
 Padding=0,0,0,0
 DynamicVariables=1
 StringCase = Upper

;----------------------------------------

[BG]
 Meter = Shape
 Shape = Rectangle 0, 0, (48.5 * #Scale#), (38 * #Scale#), 4 | Fill Color #C1# | StrokeWidth 2 | Stroke Color #HC#
 Shape2 = Rectangle 0, (40 * #Scale#), (48.5 * #Scale#), (7 * #Scale#), 4 | Fill Color #C1# | StrokeWidth 2 | Stroke Color #HC#
 Shape3 =  Rectangle 0, (49 * #Scale#), (48.5 * #Scale#), (18 * #Scale#), 4 | Fill Color #C1# | StrokeWidth 2 | Stroke Color #HC#
 X = 5
 Y = 5

;------------------------------------------------;
;                    HOLDERS                     ;
;------------------------------------------------;

[PowerHolder]
 Meter = Shape
 Shape = Rectangle 0, 0, (5 * #Scale#), (5 * #Scale#), 4 | StrokeWidth 2 | Stroke Color #HC# | Fill Color #HC#,25
 X = (42 * #Scale#)
 Y = (3 * #Scale#)

[LockHolder]
 Meter = Shape
 Shape = Rectangle 0, 0, (5 * #Scale#), (5 * #Scale#), 4 | StrokeWidth 2 | Stroke Color #HC# | Fill Color #HC#,25
 X = (42 * #Scale#)
 Y = (10 * #Scale#)

[UserHolder]
 Meter = Shape
 Shape = Rectangle 0, 0, (37 * #Scale#), (12 * #Scale#), 4 | StrokeWidth 2 | Stroke Color #HC# | Fill Color #C1#,25
 X = (3 * #Scale#)
 Y = (3 * #Scale#)

[MusicHolder]
 Meter = Shape
 Shape = Rectangle 0, 0, (44 * #Scale#), (12 * #Scale#), 4 | StrokeWidth 0 | Stroke Color #HC# | Fill Color #HC#
 X = (3 * #Scale#)
 Y = (17 * #Scale#)

[PreviousHolder]
 Meter = Shape
 Shape = Rectangle 0, 0, (5 * #Scale#), (5 * #Scale#), 4 | StrokeWidth 2 | Stroke Color #HC# | Fill Color #HC#,25
 X = (3 * #Scale#)
 Y = (31 * #Scale#)

[PlayHolder]
 Meter = Shape
 Shape = Rectangle 0, 0, (5 * #Scale#), (5 * #Scale#), 4 | StrokeWidth 2 | Stroke Color #HC# | Fill Color #HC#,25
 X = (7 * #Scale#)r
 Y = (31 * #Scale#)

[NextHolder]
 Meter = Shape
 Shape = Rectangle 0, 0, (5 * #Scale#), (5 * #Scale#), 4 | StrokeWidth 2 | Stroke Color #HC# | Fill Color #HC#,25
 X = (7 * #Scale#)r
 Y = (31 * #Scale#)

[DurationHolder]
 Meter = Shape
 Shape = Rectangle 0, 0, (23 * #Scale#), (5 * #Scale#), 4 | StrokeWidth 2 | Stroke Color #HC# | Fill Color #C1#,25
 X = (7 * #Scale#)r
 Y = (31 * #Scale#)

;------------------------------------------------;
;                    Buttons                     ;
;------------------------------------------------;

[Power]
 Meter = Image
 ImageName = #@#Images/Power2.png
 ImageTint = #HC#
 W = (3 * #Scale#)
 X = (43 * #Scale#)
 Y = (4 * #Scale#)
 MouseOverAction = [!SetOption Power ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Power ImageAlpha "255"][!Update]

[Lock]
 Meter = Image
 ImageName = #@#Images/Lock.png
 ImageTint = #HC#
 W = (3 * #Scale#)
 X = (43 * #Scale#)
 Y = (11 * #Scale#)
 MouseOverAction = [!SetOption Lock ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Lock ImageAlpha "255"][!Update]
 LeftMouseUpAction= [rundll32.exe user32.dll LockWorkStation]

[Previous]
 Meter = Image
 ImageName = #@#Images/Prev4.png
 ImageTint = #HC#
 W = (3 * #Scale#)
 X = (4 * #Scale#)
 Y = (32 * #Scale#)
 MouseOverAction = [!SetOption Previous ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Previous ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!CommandMeasure "Title" "Previous"]

[Play]
 Meter = Image
 ImageName = [StateButton]
 ImageTint = #HC#
 W = (3 * #Scale#)
 X = (7 * #Scale#)r
 Y = (32 * #Scale#)
 MouseOverAction = [!SetOption Play ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Play ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!CommandMeasure "StateButton" "PlayPause"]

[Next]
 Meter = Image
 ImageName = #@#Images/Next4.png
 ImageTint = #HC#
 W = (3 * #Scale#)
 X = (7 * #Scale#)r
 Y = (32 * #Scale#)
 MouseOverAction = [!SetOption Next ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption Next ImageAlpha "255"][!Update]
 LeftMouseUpAction = [!CommandMeasure "Title" "Next"]

;-------------------------------------------------------------;
;                          MUSIC                              ;
;-------------------------------------------------------------;

[PlayerName.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = PlayerName
 Text = %1 
 X = (7*#Scale#)r
 Y = (32.5 * #Scale#)

[SongProgress]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = MProgress
 Text = %1 |
 X = (8*#Scale#)r
 Y = (32.5 * #Scale#)

[SongDuration]
 Meter = String
 MeterStyle = FontStyle
 MeasureName =  MDuration
 Text = %1 
 X = (6.5 * #Scale#)r
 Y = (32.5 * #Scale#)

[Cover.IMG]
 Meter = Image
 MeasureName = Cover
 W = (44 * #Scale#)
 H = (12 * #Scale#)
 Container = MusicHolder
 PreserveAspectRatio = 2
 AntiAlias = 1

[CoverGradient]
 Meter = Shape
 Shape = Rectangle 0, 0, (44 * #Scale#), (12 * #Scale#), 4 | StrokeWidth 2 | Stroke Color #HC# | Fill LinearGradient MyFillGradient
 MyFillGradient= 210 | #C1#,250 ; 0.5 | #C1#,1 ; 1.2
 X = (3 * #Scale#)
 Y = (17 * #Scale#)

[Title.txt]
 Meter = String
 MeasureName = Title
 MeterStyle = FontStyle
 FontSize = (1.4 * #Scale#)
 X = (5 * #Scale#)
 Y = (20 * #Scale#)
 W = (#Scale#*22)
 ClipString = 1
 Text =  %1

[Artist.txt]
 Meter = String
 MeasureName = Artist
 MeterStyle = FontStyle
 X = (5 * #Scale#)
 Y = (23 * #Scale#)
 W = (#Scale#*22)
 ClipString = 1
 Text =  %1

;--------------------------------------------

[User.txt]
 Meter = String
 MeasureName = UserName
 MeterStyle = FontStyle
 FontColor = 255,69,156
 StringCase = None
 X = (15 * #Scale#)
 Y = (5 * #Scale#)
 W = (#Scale#*22)
 ClipString = 1
 Text =  user/@%1

[Comp.txt]
 Meter = String
 MeasureName = CompName
 MeterStyle = FontStyle
 FontColor = 255,69,156
 StringCase = None
 X = (0 * #Scale#)r
 Y = (8 * #Scale#)
 W = (#Scale#*22)
 ClipString = 1
 Text =  %1

[OS.txt]
 Meter = String
 MeasureName = OSName
 MeterStyle = FontStyle
 FontColor = 255,69,156
 StringCase = None
 X = (0 * #Scale#)r
 Y = (11 * #Scale#)
 W = (#Scale#*22)
 ClipString = 1
 Text =  %1

[User.Container]
 Meter = Shape
 Shape = Rectangle 0, 0, (10 * #Scale#), (10 * #Scale#), 4  | Fill Color #HC# | StrokeWidth 0 
 X = (4 * #Scale#)
 Y = (4 * #Scale#)

[User.IMG]
 Meter = Image
 ImageName = "C:\Users\shwet\OneDrive\Pictures\PFP\macchiato-hald8-New PFP.jpg.jpg"
 ;ImageTint = #HC#
 W = (10 * #Scale#)
 H = (10 * #Scale#)
 PreserveAspectRatio = 1 
 Container = User.Container

;--------------------------------------------------;
;                    APPS                          ;
;--------------------------------------------------;

[App1Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5), 4 | StrokeWidth 1 | Stroke Color #HC# | Fill Color #C1#
 X = (2.7*#Scale#)
 Y = (41.5*#Scale#)

[App1]
 Meter = Image
 ImageName = #Icon1#
 ;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = (3.5*#Scale#)
 X = (0.8*#Scale#)r
 Y = (0.7*#Scale#)r
 AntiAlias = 1
 Group = G1
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath1#
 MouseOverAction = [!SetOption App1 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App1 ImageAlpha "255"][!Update]
;-------------------------------------

[App2Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5), 4 | StrokeWidth 1 | Stroke Color #HC# | Fill Color #C1#
 X = (5.8*#Scale#)r
 Y = ([App1Holder:Y])

[App2]
 Meter = Image
 ImageName = #Icon2#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = (0.8*#Scale#)r
 Y = ([App1:Y])
 AntiAlias = 1
 Group = G2
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath2#
 MouseOverAction = [!SetOption App2 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App2 ImageAlpha "255"][!Update]
;--------------------------------------

[App3Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5), 4 | StrokeWidth 1 | Stroke Color #HC# | Fill Color #C1#
 X = (5.8*#Scale#)r
 Y = ([App1Holder:Y])

[App3]
 Meter = Image
 ImageName = #Icon3#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = (0.8*#Scale#)r
 Y = ([App1:Y])
 AntiAlias = 1
 Group = G3
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath3#
 MouseOverAction = [!SetOption App3 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App3 ImageAlpha "255"][!Update]
;----------------------------------------

[App4Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5), 4 | StrokeWidth 1 | Stroke Color #HC# | Fill Color #C1#
 X = (5.8*#Scale#)r
 Y = ([App1Holder:Y])

[App4]
 Meter = Image
 ImageName = #Icon4#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = (0.8*#Scale#)r
 Y = ([App1:Y])
 AntiAlias = 1
 Group = G4
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath4#
 MouseOverAction = [!SetOption App4 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App4 ImageAlpha "255"][!Update]
;---------------------------------------

[App5Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5), 4 | StrokeWidth 1 | Stroke Color #HC# | Fill Color #C1#
 X = (5.8*#Scale#)r
 Y = ([App1Holder:Y])

[App5]
 Meter = Image
 ImageName = #Icon5#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = (0.8*#Scale#)r
 Y = ([App1:Y])
 AntiAlias = 1
 Group = G5
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath5#
 MouseOverAction = [!SetOption App5 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App5 ImageAlpha "255"][!Update]

;---------------------------------------

[App6Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5), 4 | StrokeWidth 1 | Stroke Color #HC# | Fill Color #C1#
 X = (5.8*#Scale#)r
 Y = ([App1Holder:Y])

[App6]
 Meter = Image
 ImageName = #Icon6#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = (0.8*#Scale#)r
 Y = ([App1:Y])
 AntiAlias = 1
 Group = G6
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath6#
 MouseOverAction = [!SetOption App6 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App6 ImageAlpha "255"][!Update]

;---------------------------------------

[App7Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5), 4 | StrokeWidth 1 | Stroke Color #HC# | Fill Color #C1#
 X = (5.8*#Scale#)r
 Y = ([App1Holder:Y])

[App7]
 Meter = Image
 ImageName = #Icon7#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = (0.8*#Scale#)r
 Y = ([App1:Y])
 AntiAlias = 1
 Group = G7
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath7#
 MouseOverAction = [!SetOption App7 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App7 ImageAlpha "255"][!Update]

;------------------------------------------------------------------;
;                         SYS METERS                               ;
;------------------------------------------------------------------;

[File1Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (12 * #Scale#), (6 * #Scale#), 4 | StrokeWidth 0 | Fill Color #HC#
 X = (4.7 * #Scale#)
 Y = (51.5 * #Scale#)
 MouseOverAction = [!SetOption File1.IMG ImageAlpha "160"][!SetOption File1 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File1.IMG ImageAlpha "255"][!SetOption File1 FontColor "#C1#,255"][!Update]

[File2Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (12 * #Scale#), (6 * #Scale#), 4 | StrokeWidth 0 | Fill Color #HC#
 X = (14 * #Scale#)r
 Y = (0 * #Scale#)r
 MouseOverAction = [!SetOption File2.IMG ImageAlpha "160"][!SetOption File2 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File2.IMG ImageAlpha "255"][!SetOption File2 FontColor "#C1#,255"][!Update]

[File3Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (12 * #Scale#), (6 * #Scale#), 4 | StrokeWidth 0 | Fill Color #HC#
 X = (14 * #Scale#)r
 Y = (0 * #Scale#)r
 MouseOverAction = [!SetOption File3.IMG ImageAlpha "160"][!SetOption File3 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File3.IMG ImageAlpha "255"][!SetOption File3 FontColor "#C1#,255"][!Update]

[File4Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (12 * #Scale#), (6 * #Scale#), 4 | StrokeWidth 0 | Fill Color #HC#
 X = ([File1Holder:X])
 Y = (8.3 * #Scale#)r
 MouseOverAction = [!SetOption File4.IMG ImageAlpha "160"][!SetOption File4 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File4.IMG ImageAlpha "255"][!SetOption File4 FontColor "#C1#,255"][!Update]

[File5Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (12 * #Scale#), (6 * #Scale#), 4 | StrokeWidth 0 | Fill Color #HC#
 X = (14 * #Scale#)r
 Y = (0 * #Scale#)r
 MouseOverAction = [!SetOption File5.IMG ImageAlpha "160"][!SetOption File5 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File5.IMG ImageAlpha "255"][!SetOption File5 FontColor "#C1#,255"][!Update]

[File6Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (12 * #Scale#), (6 * #Scale#), 4 | StrokeWidth 0 | Fill Color #HC#
 X = (14 * #Scale#)r
 Y = (0 * #Scale#)r
 MouseOverAction = [!SetOption File6.IMG ImageAlpha "160"][!SetOption File6 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File6.IMG ImageAlpha "255"][!SetOption File6 FontColor "#C1#,255"][!Update]

;---------------------------------------

[File1.IMG]
 Meter = Image
 ImageName = #@#Images/Folder.png
 ImageTint = #C1#
 W = (3 * #Scale#)
 X = (9 * #Scale#)
 Y = (51.8 * #Scale#)
 MouseOverAction = [!SetOption File1.IMG ImageAlpha "160"][!SetOption File1 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File1.IMG ImageAlpha "255"][!SetOption File1 FontColor "#C1#,255"][!Update]

[File1]
 Meter = String
 MeterStyle = FontStyle
 FontSize = (1.4 * #Scale#)
 FontColor = #C1#
 X = (8.5 * #Scale#)
 Y = (3.3 * #Scale#)r
 Text = Home
 MouseOverAction = [!SetOption File1.IMG ImageAlpha "160"][!SetOption File1 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File1.IMG ImageAlpha "255"][!SetOption File1 FontColor "#C1#,255"][!Update]

[File2.IMG]
 Meter = Image
 ImageName = #@#Images/Documents.png
 ImageTint = #C1#
 W = (3 * #Scale#)
 X = (14.5 * #Scale#)r
 Y = (51.8 * #Scale#)
 MouseOverAction = [!SetOption File2.IMG ImageAlpha "160"][!SetOption File2 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File2.IMG ImageAlpha "255"][!SetOption File2 FontColor "#C1#,255"][!Update]

[File2]
 Meter = String
 MeterStyle = FontStyle
 FontSize = (1.4 * #Scale#)
 FontColor = #C1#
 X = (19.5 * #Scale#)
 Y = (3.3 * #Scale#)r
 Text = Documents
 MouseOverAction = [!SetOption File2.IMG ImageAlpha "160"][!SetOption File2 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File2.IMG ImageAlpha "255"][!SetOption File2 FontColor "#C1#,255"][!Update]

[File3.IMG]
 Meter = Image
 ImageName = #@#Images/Download.png
 ImageTint = #C1#
 W = (3 * #Scale#)
 X = (17.5 * #Scale#)r
 Y = (51.8 * #Scale#)
 MouseOverAction = [!SetOption File3.IMG ImageAlpha "160"][!SetOption File3 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File3.IMG ImageAlpha "255"][!SetOption File3 FontColor "#C1#,255"][!Update]

[File3]
 Meter = String
 MeterStyle = FontStyle
 FontSize = (1.4 * #Scale#)
 FontColor = #C1#
 X = (33.5 * #Scale#)
 Y = (3.3 * #Scale#)r
 Text = Downloads
 MouseOverAction = [!SetOption File3.IMG ImageAlpha "160"][!SetOption File3 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File3.IMG ImageAlpha "255"][!SetOption File3 FontColor "#C1#,255"][!Update]

[File4.IMG]
 Meter = Image
 ImageName = #@#Images/MusicNote2.png
 ImageTint = #C1#
 W = (3 * #Scale#)
 X = (9 * #Scale#)
 Y = (60 * #Scale#)
 MouseOverAction = [!SetOption File4.IMG ImageAlpha "160"][!SetOption File4 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File4.IMG ImageAlpha "255"][!SetOption File4 FontColor "#C1#,255"][!Update]

[File4]
 Meter = String
 MeterStyle = FontStyle
 FontSize = (1.4 * #Scale#)
 FontColor = #C1#
 X = (8. * #Scale#)
 Y = (3.3 * #Scale#)r
 Text = Music
 MouseOverAction = [!SetOption File4.IMG ImageAlpha "160"][!SetOption File4 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File4.IMG ImageAlpha "255"][!SetOption File4 FontColor "#C1#,255"][!Update]

[File5.IMG]
 Meter = Image
 ImageName = #@#Images/Photos2.png
 ImageTint = #C1#
 W = (3 * #Scale#)
 X = (15 * #Scale#)r
 Y = ([File4.IMG:Y])
 MouseOverAction = [!SetOption File5.IMG ImageAlpha "160"][!SetOption File5 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File5.IMG ImageAlpha "255"][!SetOption File5 FontColor "#C1#,255"][!Update]

[File5]
 Meter = String
 MeterStyle = FontStyle
 FontSize = (1.4 * #Scale#)
 FontColor = #C1#
 X = (21 * #Scale#)
 Y = (3.3 * #Scale#)r
 Text = Photos
 MouseOverAction = [!SetOption File5.IMG ImageAlpha "160"][!SetOption File5 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File5.IMG ImageAlpha "255"][!SetOption File5 FontColor "#C1#,255"][!Update]

[File6.IMG]
 Meter = Image
 ImageName = #@#Images/Videos.png
 ImageTint = #C1#
 W = (3 * #Scale#)
 X = (16 * #Scale#)r
 Y = ([File4.IMG:Y])
 MouseOverAction = [!SetOption File6.IMG ImageAlpha "160"][!SetOption File6 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File6.IMG ImageAlpha "255"][!SetOption File6 FontColor "#C1#,255"][!Update]

[File6]
 Meter = String
 MeterStyle = FontStyle
 FontSize = (1.4 * #Scale#)
 FontColor = #C1#
 X = (35 * #Scale#)
 Y = (3.3 * #Scale#)r
 Text = Videos
 MouseOverAction = [!SetOption File6.IMG ImageAlpha "160"][!SetOption File6 FontColor "#C1#,160"][!Update]
 MouseLeaveAction = [!SetOption File6.IMG ImageAlpha "255"][!SetOption File6 FontColor "#C1#,255"][!Update]