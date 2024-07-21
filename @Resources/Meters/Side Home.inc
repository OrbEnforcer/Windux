[FontStyle]
 FontFace= JetBrains Mono Medium
 FontWeight = 900
 FontColor = #Mantle#
 FontSize=(2.5*#Scale#)
 AntiAlias=1
 SolidColor=0,0,0,1
 Padding=0,0,0,0
 DynamicVariables=1
 StringCase = Upper

;----------------------------------------

[BG]
 Meter = Shape
 Shape = Rectangle 0, 0, (38.5*#Scale#), (90*#Scale#) , 4 | Fill Color #Crust# | StrokeWidth 2 | Stroke Color #Mantle#
 MouseActionCursor = 0
 X = 5
 Y = 5

;------------------------------------------------;
;                    DESIGN                      ;
;------------------------------------------------;

[TopText]
 Meter = String
 MeterStyle = FontStyle 
 Text = Home
 X = (16*#Scale#)
 Y = (1.3*#Scale#)

[HomeIcon]
 Meter = Image
 ImageName = #@#Images/Home.png
 ImageTint = #Mantle#
 W = (3.5*#Scale#)
 X = (12*#Scale#)
 Y = (1.8*#Scale#)

[L1]
 Meter = Shape
 Shape = Rectangle 0,0,([BG:W]-20), 2 | Fill Color #Mantle# | StrokeWidth 0 
 Y = (6*#Scale#)
 X = (1.5*#Scale#)

[AppsBoundary]
 Meter = Shape
 Shape = Rectangle 0,0, (36*#Scale#) , (24*#Scale#),4 | Fill Color 0,0,0,1 | StrokeWidth 2 | Stroke Color #Mantle#
 X = (1.8*#Scale#)
 Y = (8*#Scale#)

[Pin.txt]
 Meter = String
 MeterStyle = FontStyle 
 Text = Pinned
 FontSize = (1.5*#Scale#)
 FontWeight = 600
 X = (15.5*#Scale#)
 Y = (9.5*#Scale#) 

[Pin]
 Meter = Image
 ImageName = #@#Images/Pin.png
 ImageTint = #Mantle#
 W = (2.5*#Scale#)
 X = (12.5*#Scale#)
 Y = (9.5*#Scale#)

[L2]
 Meter = Shape
 Shape = Rectangle 0,0,([L1:W]), 2 | Fill Color #Mantle# | StrokeWidth 0
 Y = (33.5*#Scale#)
 X = ([L1:X])

[StorageBoundary]
 Meter = Shape
 Shape = Rectangle 0,0, ([AppsBoundary:W]) , ([AppsBoundary:H]),4 | Fill Color 0,0,0,1 | StrokeWidth 2 | Stroke Color #Mantle#
 X = ([AppsBoundary:X])
 Y = (35.5*#Scale#)

[Disk1Used]
 Meter = Bar
 MeterStyle = BarStyle
 MeasureName = mDisk1Used
 X = (4.8*#Scale#)
 Y = (42.5*#Scale#)

[C.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = mDisk1
 FontSize = (1.1*#Scale#)
 FontWeight = 400
 X = ([Disk1Used:X])
 Y = (39.5*#Scale#)
 Text = C Drive

[Disk1.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = mDisk1
 FontSize = (1.1*#Scale#)
 FontWeight = 400
 X = (22.1*#Scale#)
 Y = (39.5*#Scale#)
 Text =  Total | %1 GB

[Disk2Used]
 Meter = Bar
 MeterStyle = BarStyle
 MeasureName = mDisk2Used
 X = ([Disk1Used:X])
 Y = (49*#Scale#)

[D.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = mDisk1
 FontSize = (1.1*#Scale#)
 FontWeight = 400
 X = ([Disk2Used:X])
 Y = (46*#Scale#)
 Text = D Drive

[Disk2.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = mDisk2
 FontSize = (1.1*#Scale#)
 FontWeight = 400
 X = (22.1*#Scale#)
 Y = (46*#Scale#)
 Text =  Total | %1 GB

[Disk3Used]
 Meter = Bar
 MeterStyle = BarStyle
 MeasureName = mDisk3Used
 X = ([Disk1Used:X])
 Y = (55*#Scale#)

[E.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = mDisk1
 FontSize = (1.1*#Scale#)
 FontWeight = 400
 X = ([Disk3Used:X])
 Y = (52*#Scale#)
 Text = E Drive

[Disk3.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = mDisk3
 FontSize = (1.1*#Scale#)
 FontWeight = 400
 X = (22.1*#Scale#)
 Y = (52*#Scale#)
 Text =  Total | %1 GB

[L3]
 Meter = Shape
 Shape = Rectangle 0,0,([L1:W]), 2 | Fill Color #Mantle# | StrokeWidth 0
 Y = (61.5*#Scale#)
 X = ([L1:X])

[SysInfo]
 Meter = String
 MeterStyle = FontStyle
 FontSize = (1.5*#Scale#)
 FontWeight = 600
 Text = System Info
 X = (2*#Scale#)
 Y = (63*#Scale#)

[OSName.txt]
 Meter = String
 MeasureName = OSName
 MeterStyle = FontStyle
 FontSize = (1.2*#Scale#)
 FontWeight = 500
 Text = > OS : %1
 X = (2*#Scale#)
 Y = (67*#Scale#)

[WiFi.txt]
 Meter = String
 MeasureName = Wifi.SSID
 MeterStyle = FontStyle
 FontSize = (1.2*#Scale#)
 FontWeight = 500
 Text = > WiFi : %1
 X = (2*#Scale#)
 Y = (71*#Scale#)

[Uptime.txt]
 Meter = String
 MeasureName = Uptime
 MeterStyle = FontStyle
 FontSize = (1.2*#Scale#)
 FontWeight = 500
 Text = > Uptime : %1
 X = (2*#Scale#)
 Y = (75*#Scale#)

[Idle.txt]
 Meter = String
 MeasureName = Idle
 MeterStyle = FontStyle
 FontSize = (1.2*#Scale#)
 FontWeight = 500
 Text = > Idle Since : %1 seconds
 X = (2*#Scale#)
 Y = (79*#Scale#)

[L4]
 Meter = Shape
 Shape = Rectangle 0,0,([L1:W]), 2 | Fill Color #Mantle# | StrokeWidth 0
 Y = (82.5*#Scale#)
 X = ([L1:X])

[UserPFPContainer]
 Meter = Shape
 Shape = Rectangle 0,0,(5*#Scale#),(5*#Scale#),(5*#Scale#) | Fill Color #Mantle#
 Y = (84*#Scale#)
 X = (1.5*#Scale#)

[UserPFP]
 Meter = Image
 ImageName = #@#Images/PFP/PFP.png
 Container = UserPFPContainer
 W = (5*#Scale#)
 ImageTint = #Mantle#
 LeftMouseUpAction = ["shell:AppsFolder\Windows.ImmersiveControlPanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel"]

[User]
 Meter = String
 MeterStyle = FontStyle
 StringCase = None
 FontSize = (1.2*#Scale#)
 FontWeight = 700
 MeasureName = UserName
 Text = user/@%1
 X = (8*#Scale#)
 Y = (85.5*#Scale#)

;------------------------------------------------;
;                     APPS                       ;
;------------------------------------------------;

[App1Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5.5), 4 | StrokeWidth 1 | Stroke Color #Mantle# | Fill Color #Mantle#,25
 X = (3.2*#Scale#)
 Y = (15*#Scale#)

[App1]
 Meter = Image
 ImageName = #Icon1#
 ;GreyScale = 1 
 ;ImageTint = #Mantle#,100
 W = (3.5*#Scale#)
 X = (4.1*#Scale#)
 Y = (16*#Scale#)
 AntiAlias = 1
 Group = G1
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath1#
 MouseOverAction = [!SetOption App1 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App1 ImageAlpha "255"][!Update]
;-------------------------------------

[App2Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5.5), 4 | StrokeWidth 1 | Stroke Color #Mantle# | Fill Color #Mantle#,25
 X = (10.5*#Scale#)
 Y = (15*#Scale#)

[App2]
 Meter = Image
 ImageName = #Icon2#
;GreyScale = 1 
 ;ImageTint = #Mantle#,100
 W = ([App1:W])
 X = (11.3*#Scale#)
 Y = (16*#Scale#)
 AntiAlias = 1
 Group = G2
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath2#
 MouseOverAction = [!SetOption App2 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App2 ImageAlpha "255"][!Update]
;--------------------------------------

[App3Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5.5), 4 | StrokeWidth 1 | Stroke Color #Mantle# | Fill Color #Mantle#,25
 X = (17.5*#Scale#)
 Y = (15*#Scale#)

[App3]
 Meter = Image
 ImageName = #Icon3#
;GreyScale = 1 
 ;ImageTint = #Mantle#,100
 W = ([App1:W])
 X = (18.2*#Scale#)
 Y = (16*#Scale#)
 AntiAlias = 1
 Group = G3
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath3#
 MouseOverAction = [!SetOption App3 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App3 ImageAlpha "255"][!Update]
;----------------------------------------

[App4Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5.5), 4 | StrokeWidth 1 | Stroke Color #Mantle# | Fill Color #Mantle#,25
 X = (24.5*#Scale#)
 Y = (15*#Scale#)

[App4]
 Meter = Image
 ImageName = #Icon4#
;GreyScale = 1 
 ;ImageTint = #Mantle#,100
 W = ([App1:W])
 X = (25.2*#Scale#)
 Y = (16*#Scale#)
 AntiAlias = 1
 Group = G4
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath4#
 MouseOverAction = [!SetOption App4 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App4 ImageAlpha "255"][!Update]
;---------------------------------------

[App5Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5.5), 4 | StrokeWidth 1 | Stroke Color #Mantle# | Fill Color #Mantle#,25
 X = (31.5*#Scale#)
 Y = (15*#Scale#)

[App5]
 Meter = Image
 ImageName = #Icon5#
;GreyScale = 1 
 ;ImageTint = #Mantle#,100
 W = ([App1:W])
 X = (32.2*#Scale#)
 Y = (16*#Scale#)
 AntiAlias = 1
 Group = G5
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath5#
 MouseOverAction = [!SetOption App5 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App5 ImageAlpha "255"][!Update]
;---------------------------------------

[App6Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5.5), 4 | StrokeWidth 1 | Stroke Color #Mantle# | Fill Color #Mantle#,25
 X = (3.2*#Scale#)
 Y = (24*#Scale#)

[App6]
 Meter = Image
 ImageName = #Icon6#
;GreyScale = 1 
 ;ImageTint = #Mantle#,100
 W = ([App1:W])
 X = (4.1*#Scale#)
 Y = (25*#Scale#)
 AntiAlias = 1
 Group = G6
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath6#
 MouseOverAction = [!SetOption App6 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App6 ImageAlpha "255"][!Update]
;---------------------------------------

[App7Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5.5), 4 | StrokeWidth 1 | Stroke Color #Mantle# | Fill Color #Mantle#,25
 X = (10.5*#Scale#)
 Y = (24*#Scale#)

[App7]
 Meter = Image
 ImageName = #Icon7#
;GreyScale = 1 
 ;ImageTint = #Mantle#,100
 W = ([App1:W])
 X = (11.3*#Scale#)
 Y = (25*#Scale#)
 AntiAlias = 1
 Group = G7
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath7#
 MouseOverAction = [!SetOption App7 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App7 ImageAlpha "255"][!Update]
;---------------------------------------

[App8Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5.5), 4 | StrokeWidth 1 | Stroke Color #Mantle# | Fill Color #Mantle#,25
 X = (17.5*#Scale#)
 Y = (24*#Scale#)

[App8]
 Meter = Image
 ImageName = #Icon8#
;GreyScale = 1 
 ;ImageTint = #Mantle#,100
 W = ([App1:W])
 X = (18.2*#Scale#)
 Y = (25*#Scale#)
 AntiAlias = 1
 Group = G8
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath8#
 MouseOverAction = [!SetOption App8 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App8 ImageAlpha "255"][!Update]
;---------------------------------------

[App9Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5.5), 4 | StrokeWidth 1 | Stroke Color #Mantle# | Fill Color #Mantle#,25
 X = (24.5*#Scale#)
 Y = (24*#Scale#)

[App9]
 Meter = Image
 ImageName = #Icon9#
;GreyScale = 1 
 ;ImageTint = #Mantle#,100
 W = ([App1:W])
 X = (25.2*#Scale#)
 Y = (25*#Scale#)
 AntiAlias = 1
 Group = G9
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath9#
 MouseOverAction = [!SetOption App9 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App9 ImageAlpha "255"][!Update]
;---------------------------------------

[App10Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Scale# * 5), (#Scale# * 5.5), 4 | StrokeWidth 1 | Stroke Color #Mantle# | Fill Color #Mantle#,25
 X = (31.5*#Scale#)
 Y = (24*#Scale#)

[App10]
 Meter = Image
 ImageName = #Icon10#
;GreyScale = 1 
 ;ImageTint = #Mantle#,100
 W = ([App1:W])
 X = (32.2*#Scale#)
 Y = (25*#Scale#)
 AntiAlias = 1
 Group = G10
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath10#
 MouseOverAction = [!SetOption App10 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App10 ImageAlpha "255"][!Update]