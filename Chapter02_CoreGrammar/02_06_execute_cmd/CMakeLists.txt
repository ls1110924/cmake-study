execute_process(COMMAND zsh "-C" "git rev-parse --short HEAD" OUTPUT_VARIABLE COMMIT_ID)
message("the latest git commit id is ${COMMIT_ID}")


