/* Copyright (c) 2016 SempaiGames Games
 * http://www.sempaigames.com
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:

 * The above copyright notice and this permission notice shall be included in
 * all copies or substantial portions of the Software.

 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 * THE SOFTWARE.
 */

package org.haxe.extension.supersonic;

import android.app.Activity;
import android.util.Log;
import java.lang.String;
import org.haxe.lime.HaxeObject;

public class SecureHaxeObject
{
   private HaxeObject haxeObject;
   private Activity mainActivity;
   private String TAG;

   public SecureHaxeObject(HaxeObject haxeObject, Activity mainActivity, String tag) {
      this.haxeObject = haxeObject;
      this.mainActivity = mainActivity;
      this.TAG = tag;
   }

   public void call0(final String function)
   {
      if(haxeObject==null || mainActivity==null) return;
      mainActivity.runOnUiThread(new Runnable() {
         public void run() {
            try{
               haxeObject.call0(function);
            }catch(Exception e) {
               Log.e(TAG, "SecureHaxeObject: call0 Exception");
               Log.e(TAG, e.toString());
            }
         }
      });
   }

   public void call1(final String function, final Object arg0)
   {
      if(haxeObject==null || mainActivity==null) return;
      mainActivity.runOnUiThread(new Runnable() {
         public void run() {
            try{
               haxeObject.call1(function, arg0);
            }catch(Exception e) {
               Log.e(TAG, "SecureHaxeObject: call1 Exception");
               Log.e(TAG, e.toString());
            }
         }
      });

   }

   public void call2(final String function, final Object arg0, final Object arg1)
   {
      if(haxeObject==null || mainActivity==null) return;
      mainActivity.runOnUiThread(new Runnable() {
         public void run() {
            try{
               haxeObject.call2(function, arg0, arg1);
            }catch(Exception e) {
               Log.e(TAG, "SecureHaxeObject: call3 Exception");
               Log.e(TAG, e.toString());
            }
         }
      });
   }

   public void call3(final String function, final Object arg0, final Object arg1, final Object arg2)
   {
      if(haxeObject==null || mainActivity==null) return;
      mainActivity.runOnUiThread(new Runnable() {
         public void run() {
            try{
               haxeObject.call3(function, arg0, arg1, arg2);
            }catch(Exception e) {
               Log.e(TAG, "SecureHaxeObject: call3 Exception");
               Log.e(TAG, e.toString());
            }
         }
      });
   }

   public void call4(final String function, final Object arg0, final Object arg1, final Object arg2, final Object arg3)
   {
      if(haxeObject==null || mainActivity==null) return;
      mainActivity.runOnUiThread(new Runnable() {
         public void run() {
            try{
               haxeObject.call4(function, arg0, arg1, arg2, arg3);
            }catch(Exception e) {
               Log.e(TAG, "SecureHaxeObject: call4 Exception");
               Log.e(TAG, e.toString());
            }
         }
      });
   }

   public void call(final String function, final Object[] args)
   {
      if(haxeObject==null || mainActivity==null) return;
      mainActivity.runOnUiThread(new Runnable() {
         public void run() {
            try{
               haxeObject.call(function,args);
            }catch(Exception e) {
               Log.e(TAG, "SecureHaxeObject: call Exception");
               Log.e(TAG, e.toString());
            }
         }
      });
   }

}