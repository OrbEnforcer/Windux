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

[PlayerName]
 Measure = Plugin
 Plugin = WebNowPlaying
 PlayerType = Player

[MProgress]
 Measure = Plugin
 Plugin = WebNowPlaying
 PlayerType = Position

[MDuration]
 Measure = Plugin
 Plugin = WebNowPlaying
 PlayerType = Duration
 
[StateButton]
 Measure=Plugin
 Plugin=WebNowPlaying
 PlayerType=State
 Substitute="0":"#@#Images/Play.png","1":"#@#Images/Pause.png","2":"#@#Images/Play.png"

[RepeatButton]
Measure = Plugin
Plugin = WebNowPlaying
PlayerType = Repeat
IfCondition = RepeatButton = 0
IfTrueAction = [!SetOption RepeatSong ImageName "#@#Images/NoRepeat.png"]
IfCondition2 = RepeatButton = 1
IfTrueAction2 = [!SetOption RepeatSong ImageName "#@#Images/Repeat1.png"]
IfCondition3 = RepeatButton = 2
IfTrueAction3 = [!SetOption RepeatSong ImageName "#@#Images/Repeat.png"]

[ShuffleButton]
Measure = Plugin
Plugin = WebNowPlaying
PlayerType = Shuffle
IfCondition = ShuffleButton = 0
IfTrueAction = [!SetOption ShuffleSong ImageName "#@#Images/ShuffleOff.png"]
IfCondition2 = ShuffleButton = 1
IfTrueAction2 = [!SetOption ShuffleSong ImageName "#@#Images/Shuffle.png"]

[Cover]
 Measure = Plugin
 Plugin = WebNowPlaying
 PlayerType = Cover
 DefaultPath = "#@#Images/WNP/Default.png"
 CoverPath = "#@#Images/WNP/Cover.png"