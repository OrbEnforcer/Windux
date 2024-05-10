[FontStyle]
 FontFace= JetBrains Mono ExtraBold
 FontColor = #HC#
 FontSize=(#SCREENAREAWIDTH#/70)
 AntiAlias=1
 SolidColor=0,0,0,1
 Padding=0,0,0,0
 DynamicVariables=1
 StringCase = Upper

;----------------------------------------

[FrostedGlass]
 Measure=Plugin
 Plugin=FrostedGlass
 Type= Acrylic
 Border=All

[BG]
 Meter = Shape
 Shape = Rectangle 0, 0, #SCREENAREAWIDTH#, #SCREENAREAHEIGHT# , 0 | Fill Color #C1#,50
 LeftMouseUpAction =  [!ToggleConfig "Windux\Home\Home" "Home.ini"]
 MouseActionCursor = 0

[BG2]
 Meter = Shape
 Shape = Rectangle 0, 0, #SCREENAREAWIDTH#, (#SCREENAREAHEIGHT#/8) , 0 | Fill Color #C1#,60
 Y = (#SCREENAREAHEIGHT#-125)


[TopText]
 Meter = String
 MeterStyle = FontStyle 
 Text = Home
 X = ([BG:W]/2.1)
 Y = ([BG:H]/7) 

;----------------------------------------------------;
;                      DESGIN                        ;
;----------------------------------------------------;

[UserPFPContainer]
 Meter = Shape
 Shape = Rectangle 0,0,([BG:W]/30),([BG:W]/30),([BG:W]/30) | Fill Color #HC#
 X = ([BG:X]+20)
 Y = ([BG:H]/1.1)

[UserPFP]
 Meter = Image
 ImageName = #@#Images/PFP/PFP.png
 ImageTint = #HC#
 Container = UserPFPContainer
 W = ([BG:W]/30)
 X = 0
 Y = 0
 LeftMouseUpAction = ["shell:AppsFolder\Windows.ImmersiveControlPanel_cw5n1h2txyewy!microsoft.windows.immersivecontrolpanel"]

[User]
 Meter = String
 MeterStyle = FontStyle
 StringCase = None
 FontSize = (#SCREENAREAWIDTH#/120)
 FontWeight = 700
 MeasureName = UserName
 Text = user/@%1
 X = ([UserPFPContainer:X]+70)
 Y = ([UserPFPContainer:Y]+15)

[Power]
 Meter = Image
 ImageName = #@#Images/Power.png
 ImageTint = #HC#
 W = ([BG:W]/40)
 X = ([BG:W]/1.07)
 Y = ([BG:H]/1.09)
 MouseOverAction = [!SetOption Power ImageAlpha "160"][!Update]
 MouseLeaveAction = [!SetOption  Power ImageAlpha "255"]
 LeftMouseUpAction = [shutdown.exe -s]

;----------------------------------------------
[MusicBoundary]
 Meter = Shape
 Shape = Rectangle 0, 0, #SCREENAREAWIDTH#, (#SCREENAREAHEIGHT#/10) , 0 | Fill Color #C1#,1 | StrokeWidth 3 | Stroke Color #HC#
 Y = ([BG:H]/1.275)
 Group = On

[CoverContainer]
 Meter = Shape 
 Shape = Rectangle 0,0, ([BG:W]/25), ([BG:W]/25),4 | Fill Color #HC#
 X = ([MusicBoundary:X]+25)
 Y = ([MusicBoundary:Y]+15)

[Cover.IMG]
 Meter = Image
 MeasureName = Cover
 W =  ([BG:W]/25)
 H = ([BG:W]/25)
 Container = CoverContainer
 Group = On
 AntiAlias = 1

[Title.txt]
 Meter = String
 MeasureName = Title
 MeterStyle = FontStyle
 FontSize = (#SCREENAREAWIDTH#/170)
 FontWeight = 600
 X = ([Cover.IMG:X]+100)
 Y = ([Cover.IMG:Y]+17)
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
 Group = On
 Text =  %1

[PlayPause]
 Meter = Image
 ImageName = [StateButton]
 X = ([BG:W]/2)
 Y = ([MusicBoundary:Y]+40)
 W = ([BG:W]/70)
 DynamicVariables = 1
 ImageTint = #HC#
 Group = On
 LeftMouseUpAction = [!CommandMeasure "StateButton" "PlayPause"]

[Next]
 Meter = Image
 ImageName = #@#Images/Next4.png
 X = 70r
 Y = 0r
 W = ([PlayPause:W])
 ImageTint = #HC#
 Group = On
 LeftMouseUpAction = [!CommandMeasure "Title" "Next"]

[Prev]
 Meter = Image
 ImageName = #@#Images/Prev4.png
 X = -140r
 Y = 0r
 W = ([PlayPause:W])
 ImageTint = #HC#
 Group = On
 LeftMouseUpAction = [!CommandMeasure "Title" "Previous"]

[Duration]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = MDuration
 FontSize = (#SCREENAREAWIDTH#/170)
 FontWeight = 500
 X = ([MusicBoundary:W]/1.05)
 Y = ([BG:H]/1.22)
 
[Progress]
 Meter = String
 MeterStyle = FontStyle
 MeasureName = MProgress
 Text = %1 /
 FontSize = (#SCREENAREAWIDTH#/170)
 FontWeight = 500
 X = ([Duration:X]-60)
 Y = ([Duration:Y])
























;-----------------------------------------
;-----------------------------------------
[App1]
 Meter = Image
 ImageName = #Icon1#
 W = ([BG:W]/25)
 X = ([BG:W]/3)
 Y = ([TopText:Y]+200)
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
 X = ([App1:X]+150)
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
 X = ([App2:X]+150)
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
 X = ([App3:X]+150)
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
 X = ([App4:X]+150)
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
 Y = ([App1:Y]+150)
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
 X = ([App6:X]+150)
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
 X = ([App7:X]+150)
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
 X = ([App8:X]+150)
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
 X = ([App9:X]+150)
 Y = ([App9:Y])
 AntiAlias = 1
 Group = G10
 DynamicVariables = 1
 LeftMouseUpAction = #WholePath10#
 MouseOverAction = [!SetOption App10 ImageAlpha "90"][!Update]
 MouseLeaveAction = [!SetOption App10 ImageAlpha "255"][!Update]





