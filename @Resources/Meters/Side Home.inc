[FontStyle]
 FontFace= JetBrains Mono Medium
 FontWeight = 900
 FontColor = #HC#
 FontSize=(#SCREENAREAWIDTH#/90)
 AntiAlias=1
 SolidColor=0,0,0,1
 Padding=0,0,0,0
 DynamicVariables=1
 StringCase = Upper

;----------------------------------------

[BG]
 Meter = Shape
 Shape = Rectangle 0, 0, (#SCREENAREAWIDTH#/5), (#SCREENAREAHEIGHT#/1.17) , 4 | Fill Color #C1# | StrokeWidth 3 | Stroke Color #HC#
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
 X = ([BG:W]/2.4)
 Y = ([BG:Y]+25) 

[HomeIcon]
 Meter = Image
 ImageName = #@#Images/Home.png
 ImageTint = #HC#
 W = ([BG:W]/12)
 X = ([TopText:X]-40)
 Y = ([BG:Y]+25)

[L1]
 Meter = Shape
 Shape = Rectangle 0,0,([BG:W]-20), 2 | Fill Color #HC# | StrokeWidth 0 
 Y = ([TopText:Y]+40)
 X = 15

[AppsBoudary]
 Meter = Shape
 Shape = Rectangle 0,0, ([BG:W]-30) , ([BG:W]-150) | Fill Color 0,0,0,1 | StrokeWidth 2 | Stroke Color #HC#
 X = ([L1:X]+5)
 Y = ([L1:Y]+25)

[Pin.txt]
 Meter = String
 MeterStyle = FontStyle 
 Text = Pinned
 FontSize = (#SCREENAREAWIDTH#/120)
 FontWeight = 600
 X = ([L1:X]+135)
 Y = ([L1:Y]+35) 

[Pin]
 Meter = Image
 ImageName = #@#Images/Pin.png
 ImageTint = #HC#
 W = ([BG:W]/16)
 X = ([L1:X]+105)
 Y = ([L1:Y]+38)

[L2]
 Meter = Shape
 Shape = Rectangle 0,0,([BG:W]-20), 2 | Fill Color #HC# | StrokeWidth 0
 Y = ([TopText:Y]+325)
 X = ([L1:X])

[PlayerBoundary]
 Meter = Shape
 Shape = Rectangle 0,0, ([BG:W]-30) , ([BG:W]-150) | Fill Color 0,0,0,1 | StrokeWidth 2 | Stroke Color #HC#
 X = ([L2:X]+5)
 Y = ([L2:Y]+35)

[Disk1Used]
 Meter = Bar
 MeterStyle = BarStyle
 MeasureName = mDisk1Used
 X = ([L2:X]+35)
 Y = ([L2:Y]+100)

[C.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = mDisk1
 FontSize = (#SCREENAREAWIDTH#/180)
 FontWeight = 400
 X = ([Disk1Used:X])
 Y = ([Disk1Used:Y]-30)
 Text = C Drive

[Disk1.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = mDisk1
 FontSize = (#SCREENAREAWIDTH#/180)
 FontWeight = 400
 X = ([Disk1Used:X]+170)
 Y = ([Disk1Used:Y]-30)
 Text =  Total | %1 GB

[Disk2Used]
 Meter = Bar
 MeterStyle = BarStyle
 MeasureName = mDisk2Used
 X = ([Disk1Used:X])
 Y = ([Disk1Used:Y]+60)

[D.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = mDisk1
 FontSize = (#SCREENAREAWIDTH#/180)
 FontWeight = 400
 X = ([Disk2Used:X])
 Y = ([Disk2Used:Y]-30)
 Text = D Drive

[Disk2.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = mDisk2
 FontSize = (#SCREENAREAWIDTH#/180)
 FontWeight = 400
 X = ([Disk2Used:X]+170)
 Y = ([Disk2Used:Y]-30)
 Text =  Total | %1 GB

[Disk3Used]
 Meter = Bar
 MeterStyle = BarStyle
 MeasureName = mDisk3Used
 X = ([Disk1Used:X])
 Y = ([Disk2Used:Y]+60)

[E.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = mDisk1
 FontSize = (#SCREENAREAWIDTH#/180)
 FontWeight = 400
 X = ([Disk3Used:X])
 Y = ([Disk3Used:Y]-30)
 Text = E Drive

[Disk3.txt]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = mDisk3
 FontSize = (#SCREENAREAWIDTH#/180)
 FontWeight = 400
 X = ([Disk3Used:X]+170)
 Y = ([Disk3Used:Y]-30)
 Text =  Total | %1 GB


[L3]
 Meter = Shape
 Shape = Rectangle 0,0,([BG:W]-20), 2 | Fill Color #HC# | StrokeWidth 0
 Y = ([TopText:Y]+625)
 X = ([L1:X])

[SysInfo]
 Meter = String
 MeterStyle = FontStyle
 FontSize = (#SCREENAREAWIDTH#/120)
 FontWeight = 600
 Text = System Info
 X = ([L3:X])
 Y = ([L3:Y]+25)

[OSName.txt]
 Meter = String
 MeasureName = OSName
 MeterStyle = FontStyle
 FontSize = (#SCREENAREAWIDTH#/150)
 FontWeight = 500
 Text = > OS : %1
 X = ([L3:X])
 Y = ([SysInfo:Y]+35)

[WiFi.txt]
 Meter = String
 MeasureName = Wifi.SSID
 MeterStyle = FontStyle
 FontSize = (#SCREENAREAWIDTH#/150)
 FontWeight = 500
 Text = > WiFi : %1
 X = ([L3:X])
 Y = ([OSName.txt:Y]+35)

[Uptime.txt]
 Meter = String
 MeasureName = Uptime
 MeterStyle = FontStyle
 FontSize = (#SCREENAREAWIDTH#/150)
 FontWeight = 500
 Text = > Uptime : %1
 X = ([L3:X])
 Y = ([Wifi.txt:Y]+35)

[Idle.txt]
 Meter = String
 MeasureName = Idle
 MeterStyle = FontStyle
 FontSize = (#SCREENAREAWIDTH#/150)
 FontWeight = 500
 Text = > Idle Since : %1 seconds
 X = ([L3:X])
 Y = ([Uptime.txt:Y]+35)

[L4]
 Meter = Shape
 Shape = Rectangle 0,0,([BG:W]-20), 2 | Fill Color #HC# | StrokeWidth 0
 Y = ([L3:Y]+210)
 X = ([L1:X])

[UserPFPContainer]
 Meter = Shape
 Shape = Rectangle 0,0,([BG:W]/9),([BG:W]/9),([BG:W]/9) | Fill Color #HC#
 X = ([BG:X]+20)
 Y = ([BG:H]/1.056)

[UserPFP]
 Meter = Image
 ImageName = #@#Images/PFP/PFP.png
 Container = UserPFPContainer
 W = ([BG:W]/9)
 X = 0
 Y = 0
 LeftMouseUpAction = ["shell:AppsFolder\Windows.ImmersiveControlPanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel"]

[User]
 Meter = String
 MeterStyle = FontStyle
 StringCase = None
 FontSize = (#SCREENAREAWIDTH#/150)
 FontWeight = 700
 MeasureName = UserName
 Text = user/@%1
 X = ([UserPFPContainer:X]+50)
 Y = ([UserPFPContainer:Y]+10)

;------------------------------------------------;
;                     APPS                       ;
;------------------------------------------------;

[App1Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Size# * 50), (#Size# * 55), (#Size# * 5) | StrokeWidth 0 | Fill Color #HC#,25
 X = ([L1:X]+30)
 Y = ([Pin.txt:Y]+50)

[App1]
 Meter = Image
 ImageName = #Icon1#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([BG:W]/11)
 X = ([App1Holder:X]+7)
 Y = ([Pin.txt:Y]+60)
 AntiAlias = 1
 Group = G1
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath1#
 MouseOverAction = [!SetOption App1 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App1 ImageAlpha "255"][!Update]
;-------------------------------------

[App2Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Size# * 50), (#Size# * 55), (#Size# * 5) | StrokeWidth 0 | Fill Color #HC#,25
 X = ([App1Holder:X]+65)
 Y = ([App1Holder:Y])

[App2]
 Meter = Image
 ImageName = #Icon2#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = ([App2Holder:X]+7)
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
 Shape = Rectangle 0,0, (#Size# * 50), (#Size# * 55), (#Size# * 5) | StrokeWidth 0 | Fill Color #HC#,25
 X = ([App2Holder:X]+65)
 Y = ([App1Holder:Y])

[App3]
 Meter = Image
 ImageName = #Icon3#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = ([App3Holder:X]+7)
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
 Shape = Rectangle 0,0, (#Size# * 50), (#Size# * 55), (#Size# * 5) | StrokeWidth 0 | Fill Color #HC#,25
 X = ([App3Holder:X]+65)
 Y = ([App1Holder:Y])

[App4]
 Meter = Image
 ImageName = #Icon4#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = ([App4Holder:X]+7)
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
 Shape = Rectangle 0,0, (#Size# * 50), (#Size# * 55), (#Size# * 5) | StrokeWidth 0 | Fill Color #HC#,25
 X = ([App4Holder:X]+65)
 Y = ([App1Holder:Y])

[App5]
 Meter = Image
 ImageName = #Icon5#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = ([App5Holder:X]+7)
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
 Shape = Rectangle 0,0, (#Size# * 50), (#Size# * 55), (#Size# * 5) | StrokeWidth 0 | Fill Color #HC#,25
 X = ([App1Holder:X])
 Y = ([App1Holder:Y]+80)

[App6]
 Meter = Image
 ImageName = #Icon6#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = ([App6Holder:X]+7)
 Y = ([App1:Y]+80)
 AntiAlias = 1
 Group = G6
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath6#
 MouseOverAction = [!SetOption App6 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App6 ImageAlpha "255"][!Update]
;---------------------------------------

[App7Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Size# * 50), (#Size# * 55), (#Size# * 5) | StrokeWidth 0 | Fill Color #HC#,25
 X = ([App6Holder:X]+65)
 Y = ([App6Holder:Y])

[App7]
 Meter = Image
 ImageName = #Icon7#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = ([App7Holder:X]+7)
 Y = ([App6:Y])
 AntiAlias = 1
 Group = G7
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath7#
 MouseOverAction = [!SetOption App7 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App7 ImageAlpha "255"][!Update]
;---------------------------------------

[App8Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Size# * 50), (#Size# * 55), (#Size# * 5) | StrokeWidth 0 | Fill Color #HC#,25
 X = ([App7Holder:X]+65)
 Y = ([App6Holder:Y])

[App8]
 Meter = Image
 ImageName = #Icon8#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = ([App8Holder:X]+7)
 Y = ([App7:Y])
 AntiAlias = 1
 Group = G8
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath8#
 MouseOverAction = [!SetOption App8 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App8 ImageAlpha "255"][!Update]
;---------------------------------------

[App9Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Size# * 50), (#Size# * 55), (#Size# * 5) | StrokeWidth 0 | Fill Color #HC#,25
 X = ([App8Holder:X]+65)
 Y = ([App6Holder:Y])

[App9]
 Meter = Image
 ImageName = #Icon9#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = ([App9Holder:X]+7)
 Y = ([App8:Y])
 AntiAlias = 1
 Group = G9
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath9#
 MouseOverAction = [!SetOption App9 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App9 ImageAlpha "255"][!Update]
;---------------------------------------

[App10Holder]
 Meter = Shape
 Shape = Rectangle 0,0, (#Size# * 50), (#Size# * 55), (#Size# * 5) | StrokeWidth 0 | Fill Color #HC#,25
 X = ([App9Holder:X]+65)
 Y = ([App6Holder:Y])

[App10]
 Meter = Image
 ImageName = #Icon10#
;GreyScale = 1 
 ;ImageTint = #HC#,100
 W = ([App1:W])
 X = ([App10Holder:X]+7)
 Y = ([App9:Y])
 AntiAlias = 1
 Group = G10
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath10#
 MouseOverAction = [!SetOption App10 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App10 ImageAlpha "255"][!Update]