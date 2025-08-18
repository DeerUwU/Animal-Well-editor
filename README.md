# Animal Well editor
Map editor for the game Animal Well. <br/><br/>
This fork includes some quality of life improvements & tweaks like displaying custom assets, moving rooms, extra hotkeys, more selection options and auto deleting oldest backups to save storage space.

## todo:
- multi selection
- include editor buttons in undo history
- save user preferences
- copy data between window instances

![editor](https://github.com/Redcrafter/Animal-Well-editor/assets/19157738/dba61c55-b329-418b-81e7-baf141dc786d)

## Building
### Windows

```sh
git clone https://github.com/Redcrafter/Animal-Well-editor.git
cmake . -B build/
cmake --build build/ --config Release
```

### Linux
```sh
sudo apt install libgtk2.0-dev
git clone https://github.com/Redcrafter/Animal-Well-editor.git
cmake -DCMAKE_BUILD_TYPE=Release . -B build/
cmake --build build/
```
