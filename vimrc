se nu rnu bs=3 mouse=a si noeb
syn on

colo ron
map <F9> <ESC>:w<CR>:!g++-7 -O2 -std=c++17 -Drrr -Wall -Wconversion -Wfatal-errors -fsanitize=undefined -o %:r %<CR>
map <F5> <ESC>:!./%:r<CR>
inoremap {<CR> {<CR>}<Esc>O
inoremap <C-C> <ESC>:%y+<CR>
noremap <C-C> <ESC>:%y+<CR>


set clipboard=unnamed

autocmd Filetype cpp setlocal ts=4 sw=4 et sts=4

