## How to compile a project

The project is written on `LaTeX` in `Visual Studio Code` with the extension `LaTeX Workshop`.

The compiled file is located at the path
- `./A.pdf`
- `./B.pdf`
- `./PZ.pdf`

`Visual Studio Code` creates this `*.pdf` file automatically when changing `*.tex` files.

For the `LaTeX Workshop` extension in `Visual Studio Code` to work on

- Windows:
    - [Perl](http://strawberryperl.com/)
    - [MiKTeX](https://miktex.org/)

- Linux (Ubuntu families)
    ```
    $ sudo apt update
    $ sudo apt install texlive-full
    ```