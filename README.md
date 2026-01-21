# beamer_control

**CAUTION: We have moved all of our git presence to [codeberg](https://codeberg.org/technikkultur-erfurt). This repo is an archive.**

If you want to maintain this code, feel free to either fork this repository or migrate it to the group on [codeberg](https://codeberg.org/technikkultur-erfurt).

---

Did  you ever want to control the projector of the Bytespeicher at Erfurt?

With this sketch you can control the asus projector over ir.
All you need is to connect a ir emmiter to a arduino and upload the code.
After that you can send serial commands.
The sketch supports every key  from the asus remote.

| Command       | Name          | IR-Code       | Protocol      |
| ------------- |---------------|---------------|---------------|
| p | power | 0x10C8E11E | NEC |
| d | 3d | 0x10C851AE | NEC |
| h | hide | 0x10C8F10E | NEC |
| a | Aspect | 0x10C806F9 | NEC |
| r | resync | 0x10C8B14E | NEC |
| s | source | 0x10C831CE | NEC |
| z | zoom | 0x10C8D12E | NEC | 
| n | mute | 0x10C88679 | NEC |
| e | eeeee | 0x10C801FE | NEC | 
| o | up | 0x10C841BE | NEC |
| k | left | 0x10C8C13E | NEC |
|   | menu | 0x10C821DE | NEC |
| l | right | 0x10C8817E | NEC |
| , | Down | 0x10C8A15E | NEC |
| 1 | 1 | 0x10C85AA5 | NEC |
| 2 | 2 | 0x10C8DA25 | NEC |
| 3 | 3 | 0x10C83AC5 | NEC |
| # | PgUp | 0x10C8BA45 | NEC |
| 4 | 4 | 0x10C8A659 | NEC |
| 5 | 5 | 0x10C86699 | NEC |
| 6 | 6 | 0x10C8E619 | NEC |
| - | PgDn | 0x10C87986 | NEC |
| 7 | 7 | 0x10C87A85 | NEC |
| 8 | 8 | 0x10C852AD | NEC |
| 9 | 9 | 0x10C8D22D | NEC |
| 0 | 0 | 0x10C8FA05 | NEC |
