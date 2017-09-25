	class test {
    name= "test";
    idd = 666999;
    movingEnable = 0;
    enableSimulation = 1;

        // [0.1125,0.3,0.225,0.32]
        class CopFace: RscPicture {
            idc = -1;
            colorBackground[] = {-1,-1,-1,-1};
            x = 0.1125;
            y = 0.3;
            w = 0.225;
            h = 0.32;
        };

        // [0.3125,0.32,0.425,0.06]
        class TextAsk: RscText {
            idc = -1;
            colorBackground[] = {-1,-1,-1,-1};
            x = 0.3125;
            y = 0.32;
            w = 0.425;
            h = 0.06;
        };


    	// [0.1375,0.28,0.625,0.36]
        class MainBackground: IGUIBack {
            idc = -1;
            colorBackground[] = {0,0,0,0.7};
            x = 0.1375;
            y = 0.28;
            w = 0.625;
            h = 0.36;
        };

 	class controls {
  		// [0.3125,0.4,0.425,0.06]
        class OuiButton: RscButton {
            idc = 1600;
            text = "Oui";
            onButtonClick = "";
            x = 0.3125;
            y = 0.4;
            w = 0.425;
            h = 0.06;
        };

        // [0.3125,0.52,0.425,0.06]
        class NonButton: RscButton {
            idc = 1600;
            text = "Non";
            onButtonClick = "closeDialog 0;";
            x = 0.3125;
            y = 0.52;
            w = 0.425;
            h = 0.06;
        };
    };
};