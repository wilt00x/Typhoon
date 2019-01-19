/*
-> '/core/banner.h'

Copyright (c) 2019 B.Will.

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

// DEVELOPED by wil.tor

#ifndef _BANNER_H__
#define _BANNER_H__

char diagonal_3D_banner[] =
"        ,----,                                                               \n"
"      ,/   .`|                                                               \n"
"    ,`   .'  :                     ,---,                                     \n"
"  ;    ;     /         ,-.----.  ,--.' |                                     \n"
".'___,/    ,'          \\    /  \\ |  |  :       ,---.     ,---.        ,---,  \n"
"|    :     |           |   :    |:  :  :      '   ,'\\   '   ,'\\   ,-+-. /  | \n"
";    |.';  ;      .--, |   | .\\ ::  |  |,--. /   /   | /   /   | ,--.'|'   | \n"
"`----'  |  |    /_ ./| .   : |: ||  :  '   |.   ; ,. :.   ; ,. :|   |  ,""' | \n"
"    '   :  ; , ' , ' : |   |  \\ :|  |   /' :'   | |: :'   | |: :|   | /  | | \n"
"    |   |  '/___/ \\: | |   : .  |'  :  | | |'   | .; :'   | .; :|   | |  | | \n"
"    '   :  | .  \\  ' | :     |`-'|  |  ' | :|   :    ||   :    ||   | |  |/  \n"
"    ;   |.'   \\  ;   : :   : :   |  :  :_:,' \\   \\  /  \\   \\  / |   | |--'   \n"
"    '---'      \\  \\  ; |   | :   |  | ,'      `----'    `----'  |   |/       \n"
"                :  \\  \\`---'.|   `--''                          '---'        \n"
"                 \\  ' ;  `---`                                               \n"
"                  `--`                                                       \n";

char isometric_banner[] =
"                                ___         ___           ___           ___           ___     \n"
"                               /\\  \\       /\\  \\         /\\  \\         /\\  \\         /\\  \\    \n"
"      ___           ___       /::\\  \\      \\:\\  \\       /::\\  \\       /::\\  \\        \\:\\  \\   \n"
"     /\\__\\         /|  |     /:/\\:\\__\\      \\:\\  \\     /:/\\:\\  \\     /:/\\:\\  \\        \\:\\  \\  \n"
"    /:/  /        |:|  |    /:/ /:/  /  ___ /::\\  \\   /:/  \\:\\  \\   /:/  \\:\\  \\   _____\\:\\  \\ \n"
"   /:/__/         |:|  |   /:/_/:/  /  /\\  /:/\\:\\__\\ /:/__/ \\:\\__\\ /:/__/ \\:\\__\\ /::::::::\\__\\\n"
"  /::\\  \\       __|:|__|   \\:\\/:/  /   \\:\\/:/  \\/__/ \\:\\  \\ /:/  / \\:\\  \\ /:/  / \\:\\~~\\~~\\/__/\n"
" /:/\\:\\  \\     /::::\\  \\    \\::/__/     \\::/__/       \\:\\  /:/  /   \\:\\  /:/  /   \\:\\  \\      \n"
" \\/__\\:\\  \\    ~~~~\\:\\  \\    \\:\\  \\      \\:\\  \\        \\:\\/:/  /     \\:\\/:/  /     \\:\\  \\     \n"
"      \\:\\__\\        \\:\\__\\    \\:\\__\\      \\:\\__\\        \\::/  /       \\::/  /       \\:\\__\\    \n"
"       \\\/__/         \\\/__/     \\\/__/       \\\/__/         \\\/__/         \\\/__/         \\\/__/    \n";

char slant_banner[] =
"  ______            __                    \n"
" /_  __/_  ______  / /_  ____  ____  ____ \n"
"  / / / / / / __ \\/ __ \\/ __ \\/ __ \\/ __ \\\n"
" / / / /_/ / /_/ / / / / /_/ / /_/ / / / /\n"
"/_/  \\__, / .___/_/ /_/\\____/\\____/_/ /_/ \n"
"    /____/_/                              \n";

char mirror_banner[] =
" _____                _                   \n"
"|_   __   _  __ _  __| | ___   ___   __ _ \n"
"  | || | | |/ _` |/ _` |/ _ \\ / _ \\ / _` |\n"
"  | || |_| | (_| | | | | (_) | (_) | | | |\n"
"  |_|| .__/ \\__, |_| |_|\\___/ \\___/|_| |_|\n"
"      \\___|    |_|                        \n";

char greek_banner[] =
"                                           \n"
" _____                                     \n"
"(_   _)                                    \n"
"  | |_  _  _ ______ _ __   ___   ___  _  __\n"
"  | | || || (  __  ) '_ \\ / _ \\ / _ \\| |/ /\n"
"  | | \\| |/ || || || | | ( (_) | (_) ) / / \n"
"  |_|\\_   _/ |_||_||_| | |\\___/ \\___/|__/  \n"
"       | |             | |                 \n"
"       |_|             |_|                 \n";

char *return_random_banner(void);

#endif
