
# Tetris Game

## Overview

This is a simple implementation of the classic Tetris game using C++ and the SFML (Simple and Fast Multimedia Library) framework. The game features the ability to move and rotate blocks, clear rows, and play background music.

## Features

- **Gameplay**: Play the classic Tetris game with falling blocks.
- **Controls**:
  - **Left Arrow**: Move block left
  - **Right Arrow**: Move block right
  - **Down Arrow**: Move block down faster
  - **Up Arrow**: Rotate the block
  - **R**: Restart the game after a game over
- **Display**: Shows the current score and the next block.
- **Sound**: Background music plays during gameplay.

## Dependencies

- **SFML**: The game uses SFML for graphics and audio. You need to install SFML to build and run this game.

## Installation

1. **Clone the repository**:
   ```bash
   git clone https://github.com/yourusername/tetris.git
   cd tetris
## Install SFML:

Follow the instructions for your operating system from the [SFML website](https://www.sfml-dev.org/download.php).

## Build the Project:

1.Use CMake to generate build files:
bash
Copy code
mkdir build
cd build
cmake ..

2.Build the project using make:
bash
Copy code
make

### Run the Game:

Execute the compiled binary:
bash
Copy code
./tetris

## Files

- **main.cpp**: The entry point of the game. Handles game loop, user input, and rendering.
- **game.h**: Defines the Game class that controls game logic.
- **game.cpp**: Implements the Game class methods.
- **block.h**: Defines the Block class and its derived classes for different Tetris shapes.
- **block.cpp**: Implements methods for the Block class.
- **grid.h**: Defines the Grid class for managing the game board.
- **grid.cpp**: Implements the Grid class methods.
- **position.h**: Defines the Position class to store row and column information.
- **colors.h**: Defines colors used for different blocks.
- **colors.cpp**: Implements the color definitions.

## Notes

- **Music**: Ensure you have a file named `backgroundmusic.mp3` in the same directory as the executable for background music. You can replace this with your preferred MP3 file.
- **Font**: Ensure you have the font file `Jersey10-Regular.ttf` in the same directory as the executable for text rendering.

## License

This project is licensed under the MIT License. See the `LICENSE` file for details.

Notes
Music: Ensure you have a file named backgroundmusic.mp3 in the same directory as the executable for background music. You can replace this with your preferred MP3 file.

Font: Ensure you have the font file Jersey10-Regular.ttf in the same directory as the executable for text rendering.

License
This project is licensed under the MIT License. See the LICENSE file for details.
