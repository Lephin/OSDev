
// Выдача и обработка стартового простого интерфейса
void ui_start() {
    
    display_vga_mode(VGA_640x480);
    display_vga_cls(1);        
    display_vga_putf8(1, 1, "Вас приветствует программа установки системы", 11);
    display_vga_putf8(1, 3, "Откиньтесь на спинку кресла и наслаждайтесь бесконечностью установки ОС.", 7);
    display_vga_putf8(1, 4, "Поверьте, вы заслужили отдых от трудов и я, компьютер, о вас позабочусь!", 7);
    display_vga_putf8(1, 5, "Пожалуйста, наслаждайтесь красивой картинкой, пока я вечно делаю установку.", 7);
  
    display_vga_putf8(1, 7, "GAMING-ферма", 11);
    display_vga_putf8(1, 9, "Теперь у вас появилась реальная возможность мечтать о настоящих 3D-играх,", 7);
    display_vga_putf8(1, 10, "а все потому, что тут даже Doom не работает, так что забудьте про NVidia, ATI", 7);
    display_vga_putf8(1, 11, "и просто наслаждайтесь отсутствием зависимости от игр.", 7);
  
}
