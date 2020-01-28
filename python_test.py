#testing
import subprocess;
#stdout="abc"
#stderr="def";
out =subprocess.Popen(['ls', '-al'],stdout=subprocess.PIPE,stderr=subprocess.STDOUT);
stdout,stderr = out.communicate()
print(stdout);
print(stderr);
stdout.split()[0];

