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
 Shape = Rectangle 0, 0, (#SCREENAREAWIDTH#/5), (#SCREENAREAHEIGHT#/1.1) , 0 | Fill Color #C1# | StrokeWidth 3 | Stroke Color #HC#
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
 Shape = Rectangle 0,0,([BG:W]-20), 3 | Fill Color #HC# 
 Y = ([TopText:Y]+40)
 X = 15

[AppsBoudary]
 Meter = Shape
 Shape = Rectangle 0,0, ([BG:W]-30) , ([BG:H]-750) | Fill Color 0,0,0,1 | StrokeWidth 2 | Stroke Color #HC#
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

[l2]
 Meter = Shape
 Shape = Rectangle 0,0,([BG:W]-20), 3 | Fill Color #HC# 
 Y = ([TopText:Y]+325)
 X = ([L1:X])

[PlayerBoundary]
 Meter = Shape
 Shape = Rectangle 0,0, ([BG:W]-30) , ([BG:H]-750) | Fill Color 0,0,0,1 | StrokeWidth 2 | Stroke Color #HC#
 X = ([L2:X]+5)
 Y = ([L2:Y]+35)

[CoverContainer]
 Meter = Shape 
 Shape = Rectangle 0,0, ([BG:W]/2.7), ([BG:W]/2),4 | Fill Color #HC#
 X = ([L2:X]+15)
 Y = ([L2:Y]+55)

[Cover.IMG]
 Meter = Image
 MeasureName = Cover
 W =  ([BG:W]/2.5)
 H = ([BG:W]/2)
 Container = CoverContainer
 Group = On
 AntiAlias = 1

[Title.txt]
 Meter = String
 MeasureName = Title
 MeterStyle = FontStyle
 FontSize = (#SCREENAREAWIDTH#/170)
 FontWeight = 600
 X = ([Cover.IMG:X]+160)
 Y = ([Cover.IMG:Y]+40)
 W = ([PlayerBoundary:W]/2)
 ClipString = 1
 Group = On
 Text =  %1

[Artist.txt]
 Meter = String
 MeasureName = Artist
 MeterStyle = FontStyle
 FontSize = (#SCREENAREAWIDTH#/170)
 FontWeight = 500
 X = ([Title.txt:X])
 Y = ([Title.txt:Y]+25)
 W = ([PlayerBoundary:W]/2)
 ClipString = 1
 Group = On
 Text =  %1

[PlayPause]
 Meter = Image
 ImageName = [StateButton]
 X = ([Artist.txt:X]+35)
 Y = ([Artist.txt:Y]+50)
 W = ([BG:W]/15)
 DynamicVariables = 1
 ImageTint = #HC#
 Group = On
 LeftMouseUpAction = [!CommandMeasure "StateButton" "PlayPause"]

[Next]
 Meter = Image
 ImageName = #@#Images/Next4.png
 X = 40r
 Y = 0r
 W = ([PlayPause:W])
 ImageTint = #HC#
 Group = On
 LeftMouseUpAction = [!CommandMeasure "Title" "Next"]

[Prev]
 Meter = Image
 ImageName = #@#Images/Prev4.png
 X = -80r
 Y = 0r
 W = ([PlayPause:W])
 ImageTint = #HC#
 Group = On
 LeftMouseUpAction = [!CommandMeasure "Title" "Previous"]

[L3]
 Meter = Shape
 Shape = Rectangle 0,0,([BG:W]-20), 3 | Fill Color #HC# 
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

[TimeZone.txt]
 Meter = String
 MeasureName = TimeZone
 MeterStyle = FontStyle
 FontSize = (#SCREENAREAWIDTH#/150)
 FontWeight = 500
 Text = > Timezone : UTC%1
 X = ([L3:X])
 Y = ([SysInfo:Y]+35)

[OSName.txt]
 Meter = String
 MeasureName = OSName
 MeterStyle = FontStyle
 FontSize = (#SCREENAREAWIDTH#/150)
 FontWeight = 500
 Text = > OS : %1
 X = ([L3:X])
 Y = ([TimeZone.txt:Y]+35)

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
 Shape = Rectangle 0,0,([BG:W]-20), 3 | Fill Color #HC# 
 Y = ([L3:Y]+240)
 X = ([L1:X])

[UserPFPContainer]
 Meter = Shape
 Shape = Rectangle 0,0,([BG:W]/7),([BG:W]/7),([BG:W]/7) | Fill Color #HC#
 X = ([BG:X]+20)
 Y = ([BG:H]/1.07)

[UserPFP]
 Meter = Image
 ImageName = #@#Images/PFP/PFP.png
 Container = UserPFPContainer
 W = ([BG:W]/7)
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
 X = ([UserPFPContainer:X]+70)
 Y = ([UserPFPContainer:Y]+15)

;------------------------------------------------;
;                     APPS                       ;
;------------------------------------------------;

[App1]
 Meter = Image
 ImageName = #Icon1#
 W = ([BG:W]/9)
 X = ([L1:X]+15)
 Y = ([Pin.txt:Y]+60)
 AntiAlias = 1
 Group = G1
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath1#
 MouseOverAction = [!SetOption App1 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App1 ImageAlpha "255"][!Update]
;-------------------------------------
[App2]
 Meter = Image
 ImageName = #Icon2#
 W = ([App1:W])
 X = ([App1:X]+75)
 Y = ([App1:Y])
 AntiAlias = 1
 Group = G2
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath2#
 MouseOverAction = [!SetOption App2 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App2 ImageAlpha "255"][!Update]
;--------------------------------------
[App3]
 Meter = Image
 ImageName = #Icon3#
 W = ([App1:W])
 X = ([App2:X]+75)
 Y = ([App1:Y])
 AntiAlias = 1
 Group = G3
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath3#
 MouseOverAction = [!SetOption App3 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App3 ImageAlpha "255"][!Update]
;----------------------------------------
[App4]
 Meter = Image
 ImageName = #Icon4#
 W = ([App1:W])
 X = ([App3:X]+75)
 Y = ([App1:Y])
 AntiAlias = 1
 Group = G4
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath4#
 MouseOverAction = [!SetOption App4 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App4 ImageAlpha "255"][!Update]
;---------------------------------------
[App5]
 Meter = Image
 ImageName = #Icon5#
 W = ([App1:W])
 X = ([App4:X]+75)
 Y = ([App1:Y])
 AntiAlias = 1
 Group = G5
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath5#
 MouseOverAction = [!SetOption App5 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App5 ImageAlpha "255"][!Update]
;---------------------------------------
[App6]
 Meter = Image
 ImageName = #Icon6#
 W = ([App1:W])
 X = ([App1:X])
 Y = ([App1:Y]+75)
 AntiAlias = 1
 Group = G6
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath6#
 MouseOverAction = [!SetOption App6 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App6 ImageAlpha "255"][!Update]
;---------------------------------------
[App7]
 Meter = Image
 ImageName = #Icon7#
 W = ([App1:W])
 X = ([App6:X]+75)
 Y = ([App6:Y])
 AntiAlias = 1
 Group = G7
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath7#
 MouseOverAction = [!SetOption App7 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App7 ImageAlpha "255"][!Update]
;---------------------------------------
[App8]
 Meter = Image
 ImageName = #Icon8#
 W = ([App1:W])
 X = ([App7:X]+75)
 Y = ([App7:Y])
 AntiAlias = 1
 Group = G8
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath8#
 MouseOverAction = [!SetOption App8 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App8 ImageAlpha "255"][!Update]
;---------------------------------------
[App9]
 Meter = Image
 ImageName = #Icon9#
 W = ([App1:W])
 X = ([App8:X]+75)
 Y = ([App8:Y])
 AntiAlias = 1
 Group = G9
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath9#
 MouseOverAction = [!SetOption App9 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App9 ImageAlpha "255"][!Update]
;---------------------------------------
[App10]
 Meter = Image
 ImageName = #Icon10#
 W = ([App1:W])
 X = ([App9:X]+75)
 Y = ([App9:Y])
 AntiAlias = 1
 Group = G10
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath10#
 MouseOverAction = [!SetOption App10 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App10 ImageAlpha "255"][!Update]