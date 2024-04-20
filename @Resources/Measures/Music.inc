[Status]
 Measure = Plugin
 Plugin = WebNowPlaying
 PlayerType = Status
; IfCondition = Status = 1
; IfTrueAction = [!ShowMeterGroup "On"]
; IfFalseAction = [!HideMeterGroup "On"]

[Title]
 Measure = Plugin
 Plugin = WebNowPlaying
 PlayerType = Title

[Artist]
Measure = Plugin
Plugin = WebNowPlaying
PlayerType = Artist

[StateButton]
 Measure=Plugin
 Plugin=WebNowPlaying
 PlayerType=State
 Substitute="0":"#@#Images/Play.png","1":"#@#Images/Pause.png","2":"#@#Images/Play.png"

[Cover]
Measure = Plugin
Plugin = WebNowPlaying
PlayerType = Cover
DefaultPath = "#@#Images/Default.png"
CoverPath = "#@#Images/Cover.png"