Query xorg to get the current state of numlock, capslock and scroll lock, can be combined to i3, conky or other programs. 

# Install

```bash
make
sudo make install
````

# Usage
Just type `numcaps`

# Info

If your keyboard button isn't working:

```bash
# Turn on scroll lock
xset led named "Scroll Lock"

# Turn off scroll lock
xset -led named "Scroll Lock"
```
