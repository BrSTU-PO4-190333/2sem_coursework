# BSTU-OAiP-course-work

## Компиляция и запуск

Компилируем командой

```bash
make
```

Создается исполняемый файл `App`

Запускаем командой

```bash
./App
```

# Сборка Latex

Блокнот: `Visual Studio Code`

Расширение: `LaTeX Workshop`

Например у меня файл `В.tex` основной, т. к. содержит `\begin{document} \end{document}` 

```latex
\documentclass[12pt, a4paper]{article}

\begin{document}
...
\end{document}
```

Тогда при сохранении файла `B.tex` и подключеных к нему файлов через `\include{}`, Visual Studio Code будет сама создавать файл `B.pdf`
