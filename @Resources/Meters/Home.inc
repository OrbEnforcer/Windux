[FontStyle]
 FontFace= JetBrains Mono ExtraBold
 FontColor = #C1#
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
 Shape = Rectangle 0, 0, #SCREENAREAWIDTH#, #SCREENAREAHEIGHT# , 0 | Fill Color #HC#,50
 LeftMouseUpAction =  [!ToggleConfig "Windux\Home\Home" "Home.ini"]
 MouseActionCursor = 0

[TopText]
 Meter = String
 MeterStyle = FontStyle 
 Text = Home
 X = ([BG:W]/2.1)
 Y = ([BG:H]/7) 

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





