
#include "Particle.h"

#include <stdio.h>

#include "Adafruit_GFX.h"

#include "emscripten.h"

#include <emscripten/bind.h>
#include <emscripten/val.h>


using namespace emscripten;

void setup();
void loop();

typedef struct {
	const char *name;
	const GFXfont *gfxFont;
} FontInfo;

#include "Fonts/Autography10pt7b.h"
#include "Fonts/Autography11pt7b.h"
#include "Fonts/Autography12pt7b.h"
#include "Fonts/Autography6pt7b.h"
#include "Fonts/Autography7pt7b.h"
#include "Fonts/Autography8pt7b.h"
#include "Fonts/Autography9pt7b.h"
#include "Fonts/Bachelorette10pt7b.h"
#include "Fonts/Bachelorette11pt7b.h"
#include "Fonts/Bachelorette12pt7b.h"
#include "Fonts/Bachelorette6pt7b.h"
#include "Fonts/Bachelorette7pt7b.h"
#include "Fonts/Bachelorette8pt7b.h"
#include "Fonts/Bachelorette9pt7b.h"
#include "Fonts/Berastagi10pt7b.h"
#include "Fonts/Berastagi11pt7b.h"
#include "Fonts/Berastagi12pt7b.h"
#include "Fonts/Berastagi13pt7b.h"
#include "Fonts/Berastagi14pt7b.h"
#include "Fonts/Berastagi6pt7b.h"
#include "Fonts/Berastagi7pt7b.h"
#include "Fonts/Berastagi8pt7b.h"
#include "Fonts/Berastagi9pt7b.h"
#include "Fonts/Bucheon_Monospaced10pt7b.h"
#include "Fonts/Bucheon_Monospaced11pt7b.h"
#include "Fonts/Bucheon_Monospaced12pt7b.h"
#include "Fonts/Bucheon_Monospaced6pt7b.h"
#include "Fonts/Bucheon_Monospaced7pt7b.h"
#include "Fonts/Bucheon_Monospaced8pt7b.h"
#include "Fonts/Bucheon_Monospaced9pt7b.h"
#include "Fonts/Cream_Cake10pt7b.h"
#include "Fonts/Cream_Cake11pt7b.h"
#include "Fonts/Cream_Cake12pt7b.h"
#include "Fonts/Cream_Cake13pt7b.h"
#include "Fonts/Cream_Cake14pt7b.h"
#include "Fonts/Cream_Cake6pt7b.h"
#include "Fonts/Cream_Cake7pt7b.h"
#include "Fonts/Cream_Cake8pt7b.h"
#include "Fonts/Cream_Cake9pt7b.h"
#include "Fonts/Font2x5FixedMonoNum.h"
#include "Fonts/Font3x5FixedNum.h"
#include "Fonts/Font4x5Fixed.h"
#include "Fonts/Font4x7Fixed.h"
#include "Fonts/Font5x7FixedMono.h"
#include "Fonts/FreeMono12pt7b.h"
#include "Fonts/FreeMono18pt7b.h"
#include "Fonts/FreeMono24pt7b.h"
#include "Fonts/FreeMono9pt7b.h"
#include "Fonts/FreeMonoBold12pt7b.h"
#include "Fonts/FreeMonoBold18pt7b.h"
#include "Fonts/FreeMonoBold24pt7b.h"
#include "Fonts/FreeMonoBold9pt7b.h"
#include "Fonts/FreeMonoBoldOblique12pt7b.h"
#include "Fonts/FreeMonoBoldOblique18pt7b.h"
#include "Fonts/FreeMonoBoldOblique24pt7b.h"
#include "Fonts/FreeMonoBoldOblique9pt7b.h"
#include "Fonts/FreeMonoOblique12pt7b.h"
#include "Fonts/FreeMonoOblique18pt7b.h"
#include "Fonts/FreeMonoOblique24pt7b.h"
#include "Fonts/FreeMonoOblique9pt7b.h"
#include "Fonts/FreeSans12pt7b.h"
#include "Fonts/FreeSans18pt7b.h"
#include "Fonts/FreeSans24pt7b.h"
#include "Fonts/FreeSans6pt7b.h"
#include "Fonts/FreeSans9pt7b.h"
#include "Fonts/FreeSansBold12pt7b.h"
#include "Fonts/FreeSansBold18pt7b.h"
#include "Fonts/FreeSansBold24pt7b.h"
#include "Fonts/FreeSansBold9pt7b.h"
#include "Fonts/FreeSansBoldOblique12pt7b.h"
#include "Fonts/FreeSansBoldOblique18pt7b.h"
#include "Fonts/FreeSansBoldOblique24pt7b.h"
#include "Fonts/FreeSansBoldOblique9pt7b.h"
#include "Fonts/FreeSansOblique12pt7b.h"
#include "Fonts/FreeSansOblique18pt7b.h"
#include "Fonts/FreeSansOblique24pt7b.h"
#include "Fonts/FreeSansOblique9pt7b.h"
#include "Fonts/FreeSerif12pt7b.h"
#include "Fonts/FreeSerif18pt7b.h"
#include "Fonts/FreeSerif24pt7b.h"
#include "Fonts/FreeSerif9pt7b.h"
#include "Fonts/FreeSerifBold12pt7b.h"
#include "Fonts/FreeSerifBold18pt7b.h"
#include "Fonts/FreeSerifBold24pt7b.h"
#include "Fonts/FreeSerifBold9pt7b.h"
#include "Fonts/FreeSerifBoldItalic12pt7b.h"
#include "Fonts/FreeSerifBoldItalic18pt7b.h"
#include "Fonts/FreeSerifBoldItalic24pt7b.h"
#include "Fonts/FreeSerifBoldItalic9pt7b.h"
#include "Fonts/FreeSerifItalic12pt7b.h"
#include "Fonts/FreeSerifItalic18pt7b.h"
#include "Fonts/FreeSerifItalic24pt7b.h"
#include "Fonts/FreeSerifItalic9pt7b.h"
#include "Fonts/Graph_35_pix4pt7b.h"
#include "Fonts/Graph_35_pix8pt7b.h"
#include "Fonts/LEMONMILK_LightItalic10pt7b.h"
#include "Fonts/LEMONMILK_LightItalic6pt7b.h"
#include "Fonts/LEMONMILK_LightItalic7pt7b.h"
#include "Fonts/LEMONMILK_LightItalic8pt7b.h"
#include "Fonts/LEMONMILK_LightItalic9pt7b.h"
#include "Fonts/LEMONMILK_Medium10pt7b.h"
#include "Fonts/LEMONMILK_Medium11pt7b.h"
#include "Fonts/LEMONMILK_Medium12pt7b.h"
#include "Fonts/LEMONMILK_Medium6pt7b.h"
#include "Fonts/LEMONMILK_Medium7pt7b.h"
#include "Fonts/LEMONMILK_Medium8pt7b.h"
#include "Fonts/LEMONMILK_Medium9pt7b.h"
#include "Fonts/LEMONMILK_RegularItalic_10pt7b.h"
#include "Fonts/LEMONMILK_RegularItalic_11pt7b.h"
#include "Fonts/LEMONMILK_RegularItalic_12pt7b.h"
#include "Fonts/LEMONMILK_RegularItalic_6pt7b.h"
#include "Fonts/LEMONMILK_RegularItalic_7pt7b.h"
#include "Fonts/LEMONMILK_RegularItalic_8pt7b.h"
#include "Fonts/LEMONMILK_RegularItalic_9pt7b.h"
#include "Fonts/LEMONMILK_Regular_10pt7b.h"
#include "Fonts/LEMONMILK_Regular_11pt7b.h"
#include "Fonts/LEMONMILK_Regular_12pt7b.h"
#include "Fonts/LEMONMILK_Regular_6pt7b.h"
#include "Fonts/LEMONMILK_Regular_7pt7b.h"
#include "Fonts/LEMONMILK_Regular_8pt7b.h"
#include "Fonts/LEMONMILK_Regular_9pt7b.h"
#include "Fonts/MotorolaScreentype6pt7b.h"
#include "Fonts/nokiafc224pt7b.h"
#include "Fonts/nokiafc228pt7b.h"
#include "Fonts/Open_Sans_Bold_12pt.h"
#include "Fonts/Open_Sans_Bold_12pt.txt"
#include "Fonts/Open_Sans_Bold_36pt.h"
#include "Fonts/Open_Sans_Bold_36pt.txt"
#include "Fonts/Open_Sans_Bold_8pt.h"
#include "Fonts/Open_Sans_Bold_8pt.txt"
#include "Fonts/Open_Sans_Italic_12pt.h"
#include "Fonts/Open_Sans_Italic_14pt.h"
#include "Fonts/Open_Sans_Italic_16pt.h"
#include "Fonts/Open_Sans_Italic_20pt.h"
#include "Fonts/Open_Sans_Italic_24pt.h"
#include "Fonts/Open_Sans_Italic_28pt.h"
#include "Fonts/Open_Sans_Italic_36pt.h"
#include "Fonts/Open_Sans_Italic_8pt.h"
#include "Fonts/Org_01.h"
#include "Fonts/Picopixel.h"
#include "Fonts/pixelmix6pt7b.h"
#include "Fonts/Rubble13.h"
#include "Fonts/Tiny3x3a2pt7b.h"
#include "Fonts/TomThumb.h"
#include "Fonts/Zector10pt7b.h"
#include "Fonts/Zector11pt7b.h"
#include "Fonts/Zector12pt7b.h"
#include "Fonts/Zector6pt7b.h"
#include "Fonts/Zector7pt7b.h"
#include "Fonts/Zector8pt7b.h"
#include "Fonts/Zector9pt7b.h"

#include "Fonts/FreeMono9pt7b.h"
#include "Fonts/FreeMono12pt7b.h"
#include "Fonts/FreeMono18pt7b.h"
#include "Fonts/FreeMono24pt7b.h"
#include "Fonts/FreeMonoBold9pt7b.h"
#include "Fonts/FreeMonoBold12pt7b.h"
#include "Fonts/FreeMonoBold18pt7b.h"
#include "Fonts/FreeMonoBold24pt7b.h"
#include "Fonts/FreeMonoBoldOblique9pt7b.h"
#include "Fonts/FreeMonoBoldOblique12pt7b.h"
#include "Fonts/FreeMonoBoldOblique18pt7b.h"
#include "Fonts/FreeMonoBoldOblique24pt7b.h"
#include "Fonts/FreeMonoOblique9pt7b.h"
#include "Fonts/FreeMonoOblique12pt7b.h"
#include "Fonts/FreeMonoOblique18pt7b.h"
#include "Fonts/FreeMonoOblique24pt7b.h"

#include "Fonts/FreeSans9pt7b.h"
#include "Fonts/FreeSans12pt7b.h"
#include "Fonts/FreeSans18pt7b.h"
#include "Fonts/FreeSans24pt7b.h"
#include "Fonts/FreeSansBold9pt7b.h"
#include "Fonts/FreeSansBold12pt7b.h"
#include "Fonts/FreeSansBold18pt7b.h"
#include "Fonts/FreeSansBold24pt7b.h"
#include "Fonts/FreeSansBoldOblique9pt7b.h"
#include "Fonts/FreeSansBoldOblique12pt7b.h"
#include "Fonts/FreeSansBoldOblique18pt7b.h"
#include "Fonts/FreeSansBoldOblique24pt7b.h"
#include "Fonts/FreeSansOblique9pt7b.h"
#include "Fonts/FreeSansOblique12pt7b.h"
#include "Fonts/FreeSansOblique18pt7b.h"
#include "Fonts/FreeSansOblique24pt7b.h"

#include "Fonts/FreeSerif9pt7b.h"
#include "Fonts/FreeSerif12pt7b.h"
#include "Fonts/FreeSerif18pt7b.h"
#include "Fonts/FreeSerif24pt7b.h"
#include "Fonts/FreeSerifBold9pt7b.h"
#include "Fonts/FreeSerifBold12pt7b.h"
#include "Fonts/FreeSerifBold18pt7b.h"
#include "Fonts/FreeSerifBold24pt7b.h"
#include "Fonts/FreeSerifBoldItalic9pt7b.h"
#include "Fonts/FreeSerifBoldItalic12pt7b.h"
#include "Fonts/FreeSerifBoldItalic18pt7b.h"
#include "Fonts/FreeSerifBoldItalic24pt7b.h"
#include "Fonts/FreeSerifItalic9pt7b.h"
#include "Fonts/FreeSerifItalic12pt7b.h"
#include "Fonts/FreeSerifItalic18pt7b.h"
#include "Fonts/FreeSerifItalic24pt7b.h"

#include "Fonts/Org_01.h"
#include "Fonts/Picopixel.h"
#include "Fonts/Tiny3x3a2pt7b.h"
#include "Fonts/TomThumb.h"

FontInfo fontInfo[] = {
		{ "Autography10pt7b", &Autography10pt7b },
		{ "Autography11pt7b", &Autography11pt7b },
		{ "Autography12pt7b", &Autography12pt7b },
		{ "Autography6pt7b", &Autography6pt7b },
		{ "Autography7pt7b", &Autography7pt7b },
		{ "Autography8pt7b", &Autography8pt7b },
		{ "Autography9pt7b", &Autography9pt7b },
		{ "Bachelorette10pt7b", &Bachelorette10pt7b },
		{ "Bachelorette11pt7b", &Bachelorette11pt7b },
		{ "Bachelorette12pt7b", &Bachelorette12pt7b },
		{ "Bachelorette6pt7b", &Bachelorette6pt7b },
		{ "Bachelorette7pt7b", &Bachelorette7pt7b },
		{ "Bachelorette8pt7b", &Bachelorette8pt7b },
		{ "Bachelorette9pt7b", &Bachelorette9pt7b },
		{ "Berastagi10pt7b", &Berastagi10pt7b },
		{ "Berastagi11pt7b", &Berastagi11pt7b },
		{ "Berastagi12pt7b", &Berastagi12pt7b },
		{ "Berastagi13pt7b", &Berastagi13pt7b },
		{ "Berastagi14pt7b", &Berastagi14pt7b },
		{ "Berastagi6pt7b", &Berastagi6pt7b },
		{ "Berastagi7pt7b", &Berastagi7pt7b },
		{ "Berastagi8pt7b", &Berastagi8pt7b },
		{ "Berastagi9pt7b", &Berastagi9pt7b },
		{ "Bucheon_Monospaced10pt7b", &Bucheon_Monospaced10pt7b },
		{ "Bucheon_Monospaced11pt7b", &Bucheon_Monospaced11pt7b },
		{ "Bucheon_Monospaced12pt7b", &Bucheon_Monospaced12pt7b },
		{ "Bucheon_Monospaced6pt7b", &Bucheon_Monospaced6pt7b },
		{ "Bucheon_Monospaced7pt7b", &Bucheon_Monospaced7pt7b },
		{ "Bucheon_Monospaced8pt7b", &Bucheon_Monospaced8pt7b },
		{ "Bucheon_Monospaced9pt7b", &Bucheon_Monospaced9pt7b },
		{ "Cream_Cake10pt7b", &Cream_Cake10pt7b },
		{ "Cream_Cake11pt7b", &Cream_Cake11pt7b },
		{ "Cream_Cake12pt7b", &Cream_Cake12pt7b },
		{ "Cream_Cake13pt7b", &Cream_Cake13pt7b },
		{ "Cream_Cake14pt7b", &Cream_Cake14pt7b },
		{ "Cream_Cake6pt7b", &Cream_Cake6pt7b },
		{ "Cream_Cake7pt7b", &Cream_Cake7pt7b },
		{ "Cream_Cake8pt7b", &Cream_Cake8pt7b },
		{ "Cream_Cake9pt7b", &Cream_Cake9pt7b },
		{ "Font2x5FixedMonoNum", &Font2x5FixedMonoNum },
		{ "Font3x5FixedNum", &Font3x5FixedNum },
		{ "Font4x5Fixed", &Font4x5Fixed },
		{ "Font4x7Fixed", &Font4x7Fixed },
		{ "Font5x7FixedMono", &Font5x7FixedMono },
		{ "FreeMono12pt7b", &FreeMono12pt7b },
		{ "FreeMono18pt7b", &FreeMono18pt7b },
		{ "FreeMono24pt7b", &FreeMono24pt7b },
		{ "FreeMono9pt7b", &FreeMono9pt7b },
		{ "FreeMonoBold12pt7b", &FreeMonoBold12pt7b },
		{ "FreeMonoBold18pt7b", &FreeMonoBold18pt7b },
		{ "FreeMonoBold24pt7b", &FreeMonoBold24pt7b },
		{ "FreeMonoBold9pt7b", &FreeMonoBold9pt7b },
		{ "FreeMonoBoldOblique12pt7b", &FreeMonoBoldOblique12pt7b },
		{ "FreeMonoBoldOblique18pt7b", &FreeMonoBoldOblique18pt7b },
		{ "FreeMonoBoldOblique24pt7b", &FreeMonoBoldOblique24pt7b },
		{ "FreeMonoBoldOblique9pt7b", &FreeMonoBoldOblique9pt7b },
		{ "FreeMonoOblique12pt7b", &FreeMonoOblique12pt7b },
		{ "FreeMonoOblique18pt7b", &FreeMonoOblique18pt7b },
		{ "FreeMonoOblique24pt7b", &FreeMonoOblique24pt7b },
		{ "FreeMonoOblique9pt7b", &FreeMonoOblique9pt7b },
		{ "FreeSans12pt7b", &FreeSans12pt7b },
		{ "FreeSans18pt7b", &FreeSans18pt7b },
		{ "FreeSans24pt7b", &FreeSans24pt7b },
		{ "FreeSans6pt7b", &FreeSans6pt7b },
		{ "FreeSans9pt7b", &FreeSans9pt7b },
		{ "FreeSansBold12pt7b", &FreeSansBold12pt7b },
		{ "FreeSansBold18pt7b", &FreeSansBold18pt7b },
		{ "FreeSansBold24pt7b", &FreeSansBold24pt7b },
		{ "FreeSansBold9pt7b", &FreeSansBold9pt7b },
		{ "FreeSansBoldOblique12pt7b", &FreeSansBoldOblique12pt7b },
		{ "FreeSansBoldOblique18pt7b", &FreeSansBoldOblique18pt7b },
		{ "FreeSansBoldOblique24pt7b", &FreeSansBoldOblique24pt7b },
		{ "FreeSansBoldOblique9pt7b", &FreeSansBoldOblique9pt7b },
		{ "FreeSansOblique12pt7b", &FreeSansOblique12pt7b },
		{ "FreeSansOblique18pt7b", &FreeSansOblique18pt7b },
		{ "FreeSansOblique24pt7b", &FreeSansOblique24pt7b },
		{ "FreeSansOblique9pt7b", &FreeSansOblique9pt7b },
		{ "FreeSerif12pt7b", &FreeSerif12pt7b },
		{ "FreeSerif18pt7b", &FreeSerif18pt7b },
		{ "FreeSerif24pt7b", &FreeSerif24pt7b },
		{ "FreeSerif9pt7b", &FreeSerif9pt7b },
		{ "FreeSerifBold12pt7b", &FreeSerifBold12pt7b },
		{ "FreeSerifBold18pt7b", &FreeSerifBold18pt7b },
		{ "FreeSerifBold24pt7b", &FreeSerifBold24pt7b },
		{ "FreeSerifBold9pt7b", &FreeSerifBold9pt7b },
		{ "FreeSerifBoldItalic12pt7b", &FreeSerifBoldItalic12pt7b },
		{ "FreeSerifBoldItalic18pt7b", &FreeSerifBoldItalic18pt7b },
		{ "FreeSerifBoldItalic24pt7b", &FreeSerifBoldItalic24pt7b },
		{ "FreeSerifBoldItalic9pt7b", &FreeSerifBoldItalic9pt7b },
		{ "FreeSerifItalic12pt7b", &FreeSerifItalic12pt7b },
		{ "FreeSerifItalic18pt7b", &FreeSerifItalic18pt7b },
		{ "FreeSerifItalic24pt7b", &FreeSerifItalic24pt7b },
		{ "FreeSerifItalic9pt7b", &FreeSerifItalic9pt7b },
		{ "Graph_35_pix4pt7b", &Graph_35_pix4pt7b },
		{ "Graph_35_pix8pt7b", &Graph_35_pix8pt7b },
		{ "LEMONMILK_LightItalic10pt7b", &LEMONMILK_LightItalic10pt7b },
		{ "LEMONMILK_LightItalic6pt7b", &LEMONMILK_LightItalic6pt7b },
		{ "LEMONMILK_LightItalic7pt7b", &LEMONMILK_LightItalic7pt7b },
		{ "LEMONMILK_LightItalic8pt7b", &LEMONMILK_LightItalic8pt7b },
		{ "LEMONMILK_LightItalic9pt7b", &LEMONMILK_LightItalic9pt7b },
		{ "LEMONMILK_Medium10pt7b", &LEMONMILK_Medium10pt7b },
		{ "LEMONMILK_Medium11pt7b", &LEMONMILK_Medium11pt7b },
		{ "LEMONMILK_Medium12pt7b", &LEMONMILK_Medium12pt7b },
		{ "LEMONMILK_Medium6pt7b", &LEMONMILK_Medium6pt7b },
		{ "LEMONMILK_Medium7pt7b", &LEMONMILK_Medium7pt7b },
		{ "LEMONMILK_Medium8pt7b", &LEMONMILK_Medium8pt7b },
		{ "LEMONMILK_Medium9pt7b", &LEMONMILK_Medium9pt7b },
		{ "LEMONMILK_RegularItalic_10pt7b", &LEMONMILK_RegularItalic_10pt7b },
		{ "LEMONMILK_RegularItalic_11pt7b", &LEMONMILK_RegularItalic_11pt7b },
		{ "LEMONMILK_RegularItalic_12pt7b", &LEMONMILK_RegularItalic_12pt7b },
		{ "LEMONMILK_RegularItalic_6pt7b", &LEMONMILK_RegularItalic_6pt7b },
		{ "LEMONMILK_RegularItalic_7pt7b", &LEMONMILK_RegularItalic_7pt7b },
		{ "LEMONMILK_RegularItalic_8pt7b", &LEMONMILK_RegularItalic_8pt7b },
		{ "LEMONMILK_RegularItalic_9pt7b", &LEMONMILK_RegularItalic_9pt7b },
		{ "LEMONMILK_Regular_10pt7b", &LEMONMILK_Regular_10pt7b },
		{ "LEMONMILK_Regular_11pt7b", &LEMONMILK_Regular_11pt7b },
		{ "LEMONMILK_Regular_12pt7b", &LEMONMILK_Regular_12pt7b },
		{ "LEMONMILK_Regular_6pt7b", &LEMONMILK_Regular_6pt7b },
		{ "LEMONMILK_Regular_7pt7b", &LEMONMILK_Regular_7pt7b },
		{ "LEMONMILK_Regular_8pt7b", &LEMONMILK_Regular_8pt7b },
		{ "LEMONMILK_Regular_9pt7b", &LEMONMILK_Regular_9pt7b },
		{ "MotorolaScreentype6pt7b", &MotorolaScreentype6pt7b },
		{ "nokiafc224pt7b", &nokiafc224pt7b },
		{ "nokiafc228pt7b", &nokiafc228pt7b },
		{ "Open_Sans_Bold_12pt", &Open_Sans_Bold_12pt },
		{ "Open_Sans_Bold_12pt.txt", &Open_Sans_Bold_12pt.txt
		{ "Open_Sans_Bold_36pt", &Open_Sans_Bold_36pt },
		{ "Open_Sans_Bold_36pt.txt", &Open_Sans_Bold_36pt.txt
		{ "Open_Sans_Bold_8pt", &Open_Sans_Bold_8pt },
		{ "Open_Sans_Bold_8pt.txt", &Open_Sans_Bold_8pt.txt
		{ "Open_Sans_Italic_12pt", &Open_Sans_Italic_12pt },
		{ "Open_Sans_Italic_14pt", &Open_Sans_Italic_14pt },
		{ "Open_Sans_Italic_16pt", &Open_Sans_Italic_16pt },
		{ "Open_Sans_Italic_20pt", &Open_Sans_Italic_20pt },
		{ "Open_Sans_Italic_24pt", &Open_Sans_Italic_24pt },
		{ "Open_Sans_Italic_28pt", &Open_Sans_Italic_28pt },
		{ "Open_Sans_Italic_36pt", &Open_Sans_Italic_36pt },
		{ "Open_Sans_Italic_8pt", &Open_Sans_Italic_8pt },
		{ "Org_01", &Org_01 },
		{ "Picopixel", &Picopixel },
		{ "pixelmix6pt7b", &pixelmix6pt7b },
		{ "Rubble13", &Rubble13 },
		{ "Tiny3x3a2pt7b", &Tiny3x3a2pt7b },
		{ "TomThumb", &TomThumb },
		{ "Zector10pt7b", &Zector10pt7b },
		{ "Zector11pt7b", &Zector11pt7b },
		{ "Zector12pt7b", &Zector12pt7b },
		{ "Zector6pt7b", &Zector6pt7b },
		{ "Zector7pt7b", &Zector7pt7b },
		{ "Zector8pt7b", &Zector8pt7b },
		{ "Zector9pt7b", &Zector9pt7b },

		{ "FreeMono9pt7b", &FreeMono9pt7b },
		{ "FreeMono12pt7b", &FreeMono12pt7b },
		{ "FreeMono18pt7b", &FreeMono18pt7b },
		{ "FreeMono24pt7b", &FreeMono24pt7b },

		{ "FreeMonoBold9pt7b", &FreeMonoBold9pt7b },
		{ "FreeMonoBold12pt7b", &FreeMonoBold12pt7b },
		{ "FreeMonoBold18pt7b", &FreeMonoBold18pt7b },
		{ "FreeMonoBold24pt7b", &FreeMonoBold24pt7b },

		{ "FreeMonoOblique9pt7b", &FreeMonoOblique9pt7b },
		{ "FreeMonoOblique12pt7b", &FreeMonoOblique12pt7b },
		{ "FreeMonoOblique18pt7b", &FreeMonoOblique18pt7b },
		{ "FreeMonoOblique24pt7b", &FreeMonoOblique24pt7b },

		{ "FreeMonoBoldOblique9pt7b", &FreeMonoBoldOblique9pt7b },
		{ "FreeMonoBoldOblique12pt7b", &FreeMonoBoldOblique12pt7b },
		{ "FreeMonoBoldOblique18pt7b", &FreeMonoBoldOblique18pt7b },
		{ "FreeMonoBoldOblique24pt7b", &FreeMonoBoldOblique24pt7b },

		{ "FreeSans9pt7b", &FreeSans9pt7b },
		{ "FreeSans12pt7b", &FreeSans12pt7b },
		{ "FreeSans18pt7b", &FreeSans18pt7b },
		{ "FreeSans24pt7b", &FreeSans24pt7b },

		{ "FreeSansBold9pt7b", &FreeSansBold9pt7b },
		{ "FreeSansBold12pt7b", &FreeSansBold12pt7b },
		{ "FreeSansBold18pt7b", &FreeSansBold18pt7b },
		{ "FreeSansBold24pt7b", &FreeSansBold24pt7b },

		{ "FreeSansOblique9pt7b", &FreeSansOblique9pt7b },
		{ "FreeSansOblique12pt7b", &FreeSansOblique12pt7b },
		{ "FreeSansOblique18pt7b", &FreeSansOblique18pt7b },
		{ "FreeSansOblique24pt7b", &FreeSansOblique24pt7b },

		{ "FreeSansBoldOblique9pt7b", &FreeSansBoldOblique9pt7b },
		{ "FreeSansBoldOblique12pt7b", &FreeSansBoldOblique12pt7b },
		{ "FreeSansBoldOblique18pt7b", &FreeSansBoldOblique18pt7b },
		{ "FreeSansBoldOblique24pt7b", &FreeSansBoldOblique24pt7b },

//
		{ "FreeSerif9pt7b", &FreeSerif9pt7b },
		{ "FreeSerif12pt7b", &FreeSerif12pt7b },
		{ "FreeSerif18pt7b", &FreeSerif18pt7b },
		{ "FreeSerif24pt7b", &FreeSerif24pt7b },

		{ "FreeSerifBold9pt7b", &FreeSerifBold9pt7b },
		{ "FreeSerifBold12pt7b", &FreeSerifBold12pt7b },
		{ "FreeSerifBold18pt7b", &FreeSerifBold18pt7b },
		{ "FreeSerifBold24pt7b", &FreeSerifBold24pt7b },

		{ "FreeSerifItalic9pt7b", &FreeSerifItalic9pt7b },
		{ "FreeSerifItalic12pt7b", &FreeSerifItalic12pt7b },
		{ "FreeSerifItalic18pt7b", &FreeSerifItalic18pt7b },
		{ "FreeSerifItalic24pt7b", &FreeSerifItalic24pt7b },

		{ "FreeSerifBoldItalic9pt7b", &FreeSerifBoldItalic9pt7b },
		{ "FreeSerifBoldItalic12pt7b", &FreeSerifBoldItalic12pt7b },
		{ "FreeSerifBoldItalic18pt7b", &FreeSerifBoldItalic18pt7b },
		{ "FreeSerifBoldItalic24pt7b", &FreeSerifBoldItalic24pt7b },

		{ "Org_01", &Org_01 },
		{ "Picopixel", &Picopixel },
		{ "Tiny3x3a2pt7b", &Tiny3x3a2pt7b },
		{ "TomThumb", &TomThumb }

};

class TestGFX : public GFXcanvas1 {
public:
	TestGFX(int16_t w, int16_t h);

	// Enscripten doesn't like all of the special types like uint16_t, so just wrap them with ints
	void _fillScreen(int color) { fillScreen(color); };
    void _fillRect(int x, int y, int w, int h, int color) { fillRect(x, y, w, h, color); };
    void _writePixel(int x, int y, int color) { writePixel(x, y, color); };
    void _drawLine(int x0, int y0, int x1, int y1, int color) { drawLine(x0, y0, x1, y1, color); };
    void _drawRect(int x, int y, int w, int h, int color) { drawRect(x, y, w, h, color); };
    void _drawCircle(int x0, int y0, int r, int color) { drawCircle(x0, y0, r, color); };
    void _fillCircle(int x0, int y0, int r, int color) { fillCircle(x0, y0, r, color); };
    void _drawTriangle(int x0, int y0, int x1, int y1, int x2, int y2, int color) { drawTriangle(x0, y0, x1, y1, x2, y2, color); };
    void _fillTriangle(int x0, int y0, int x1, int y1, int x2, int y2, int color) { fillTriangle(x0, y0, x1, y1, x2, y2, color); };
    void _drawRoundRect(int x0, int y0, int w, int h, int radius, int color) { drawRoundRect(x0, y0, w, h, radius, color); };
    void _fillRoundRect(int x0, int y0, int w, int h, int radius, int color) { fillRoundRect(x0, y0, w, h, radius, color); };
    void _setCursor(int x, int y) { setCursor(x, y); };
    void _setTextColor(int color) { setTextColor(color); };
    void _setTextColor2(int color, int backgroundColor) { setTextColor(color, backgroundColor); };
    void _setTextSize(int size) { setTextSize(size); };
    void _setTextWrap(int w) { setTextWrap(w != 0); };
    void _drawBitmap(int x, int y, std::vector<int> bitmap, int w, int h, int color);
    int _getCursorX() const { return getCursorX(); };
    int _getCursorY() const { return getCursorY(); };
    void _invertDisplay(int invert) { return invertDisplay(invert); };
    void _setRotation(int rot) { return setRotation(rot); };

    void _print(std::string s);
    void _println(std::string s);
    int _measureTextX(std::string str);

    int getNumFonts();
    std::string getFontName(int index);
    std::vector<std::string> getFonts();
    void setFontByName(std::string name);

	val getBytes();


    size_t bufSize;
};

TestGFX::TestGFX(int16_t w, int16_t h) : GFXcanvas1(w, h) {
	bufSize = ((w + 7) / 8) * h;
}

void TestGFX::_print(std::string str) {
	for (std::string::iterator it = str.begin(); it < str.end(); it++) {
		write((char)*it);
	}
}

void TestGFX::_println(std::string str) {
	for (std::string::iterator it = str.begin(); it < str.end(); it++) {
		write((char)*it);
	}
	write('\n');
}

int TestGFX::_measureTextX(std::string str) {
	int16_t x1, y1;
	uint16_t w, h;

	getTextBounds(str.c_str(), 0, getCursorY(), &x1, &y1, &w, &h);

	return w;
}

// getTextBounds(const char *string, int16_t x, int16_t y,
//  int16_t *x1, int16_t *y1, uint16_t *w, uint16_t *h),


void TestGFX::_drawBitmap(int x, int y, std::vector<int> bitmapValues, int w, int h, int color) {
	uint8_t *bitmap = new uint8_t[bitmapValues.size()];

	for(size_t ii = 0; ii < bitmapValues.size(); ii++) {
		bitmap[ii] = (uint8_t) bitmapValues[ii];
	}

	drawBitmap((int16_t)x, (int16_t)y, bitmap, (int16_t)w, (int16_t)h, (uint16_t)color);

	delete[] bitmap;
}

std::vector<std::string> TestGFX::getFonts() {
	std::vector<std::string> result;

	size_t numFonts = sizeof(fontInfo) / sizeof(FontInfo);
	for(size_t ii = 0; ii < numFonts; ii++) {
		result.push_back(std::string(fontInfo[ii].name));
	}


	return result;
}


void TestGFX::setFontByName(std::string name) {
	bool found = false;

	size_t numFonts = sizeof(fontInfo) / sizeof(FontInfo);

	for(size_t ii = 0; ii < numFonts; ii++) {
		if (name.compare(fontInfo[ii].name) == 0) {
			setFont(fontInfo[ii].gfxFont);
			found = true;
			break;
		}
	}

	if (!found) {
		setFont(NULL);
	}
}


val TestGFX::getBytes() {

	return val(typed_memory_view(bufSize, getBuffer()));
}

EMSCRIPTEN_BINDINGS(testGFX) {
	class_<TestGFX>("TestGFX")
    		.constructor<int16_t, int16_t>()
			.function("fillRect", &TestGFX::_fillRect)
			.function("fillScreen", &TestGFX::_fillScreen)
			.function("writePixel", &TestGFX::_writePixel)
			.function("drawLine", &TestGFX::_drawLine)
			.function("drawRect", &TestGFX::_drawRect)
			.function("drawCircle", &TestGFX::_drawCircle)
			.function("fillCircle", &TestGFX::_fillCircle)
			.function("drawTriangle", &TestGFX::_drawTriangle)
			.function("fillTriangle", &TestGFX::_fillTriangle)
			.function("drawRoundRect", &TestGFX::_drawRoundRect)
			.function("fillRoundRect", &TestGFX::_fillRoundRect)
			.function("setCursor", &TestGFX::_setCursor)
			.function("setTextColor", &TestGFX::_setTextColor)
			.function("setTextColor2", &TestGFX::_setTextColor2)
			.function("setTextSize", &TestGFX::_setTextSize)
			.function("setTextWrap", &TestGFX::_setTextWrap)
			.function("print", &TestGFX::_print)
			.function("println", &TestGFX::_println)
			.function("drawBitmap", &TestGFX::_drawBitmap)
			.function("getFonts", &TestGFX::getFonts)
			.function("setFontByName", &TestGFX::setFontByName)
			.function("getCursorX", &TestGFX::_getCursorX)
			.function("getCursorY", &TestGFX::_getCursorY)
			.function("measureTextX", &TestGFX::_measureTextX)
			.function("getBytes", &TestGFX::getBytes)
			.function("invertDisplay", &TestGFX::_invertDisplay)
			.function("setRotation", &TestGFX::_setRotation)
			;
	register_vector<std::string>("VectorString");
	register_vector<int>("VectorInt");
}


int main() {
	setup();
	emscripten_set_main_loop(loop, 100, 1);
}


void setup() {
	// printf("setup\n");
}

void loop() {
	// printf("loop\n");
}
