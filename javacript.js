function toggleMode () {
    const html = document.documentElement
    html.classList.toggle('light')

    if (html.classList.contains('light')){
        html.classList.add('light')
    }
    else {
        html.classList.remove('light')
    }
}