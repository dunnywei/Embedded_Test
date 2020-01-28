#netperf -H 134.117.197.1 -p 80 -l 100
#testing
import subprocess;
#stdout="abc"
#stderr="def";
out =subprocess.Popen(['netperf', '-H 134.117.197.1','-p 80','-l 100'],stdout=subprocess.PIPE,stderr=subprocess.STDOUT);
stdout,stderr = out.communicate()
print(stdout);
print(stderr);
stdout.split()[0];

