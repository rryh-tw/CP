# CP

## scripts from Jay Leeds
[My Competitive Programming Setup](https://youtu.be/S48QUOIkoNc)
- stress.sh https://pastebin.com/MkfwM3S9
 - Format: stress.sh solutionA solutionB generator numTests
 - Runs solutionA and solutionB against test cases output by generator and outputs a test on which they give different results
- validate.sh https://pastebin.com/zuRze3aW
 - Format: validate.sh solution validator generator numTests
 - Runs solution against test cases output by generator, then feeds the test cases followed by the output into validator.  Returns a test case on which the validator does not output "OK".
