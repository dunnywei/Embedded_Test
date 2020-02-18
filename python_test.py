#netperf -H192.168.2.1 -l360 -p 80 -- -m 90000 -M 90000 -S 90000 -s 90000
#netperf -t TCP_STREAM -H192.168.2.1 -p 80 -- -m 300 -M 300 -S 300 -s 300
#testing
import subprocess;
#stdout="abc"
#stderr="def";
out =subprocess.Popen(['netperf', '-H192.168.2.1','-p 80'],stdout=subprocess.PIPE,stderr=subprocess.STDOUT);
stdout,stderr = out.communicate()
print(stdout);
print(stderr);
stdout.split()[0];
stdout.split()[1];

