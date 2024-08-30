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

[Album]
 Measure = Plugin 
 Plugin = WebNowPlaying
 PlayerType = Album

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

[MProgressBar]
 Measure = Plugin
 Plugin = WebNowPlaying
 PlayerType = Progress

[StateButton]
 Measure = Plugin
 Plugin = WebNowPlaying
 PlayerType = State
 Substitute = "0":"#@#Images/Play.png","1":"#@#Images/Pause.png","2":"#@#Images/Play.png"

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


;-----------------------------------------------------------;
;                    VISUALIZER VARS                        ;
;-----------------------------------------------------------;

[MeasureAudio]
Measure = Plugin
Plugin = AudioLevel
Port = Output
FFTSize = 1024
FFTAttack = 75
FFTDecay = 150
Bands = 15

[Band0]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 0

[Band1]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 1

[Band2]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 2

[Band3]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 3

[Band4]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 4

[Band5]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 5

[Band6]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 6

[Band7]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 7

[Band8]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 8

[Band9]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 9

[Band10]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 10

[Band11]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 11

[Band12]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 12

[Band13]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 13

[Band14]
Measure = Plugin
Plugin = AudioLevel
Parent = MeasureAudio
Type = Band
BandIdx = 14