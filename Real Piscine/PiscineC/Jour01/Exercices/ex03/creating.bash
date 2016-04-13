mkdir -p test/{{a..d},links}
touch test/{a/a{000..010},b/b{000..010},c/c{000..010},d/d{000..010}}
ln test/{a/a{000..010},b/b{000..010}} test/links
ln -s test/{c/c{000..010},d/d{000..010}} test/links
