echo "---- 开始执行 ----"
$emoji_list = @('😀', '😁', '😃', '😎', '😊', '😘', '🤔')
git add .
git commit -m "$($emoji_list | Get-Random): $(Get-Date -Format 'yyyy-MM-dd HH:mm:ss')"
git push
echo "---- 任务完成 ----"